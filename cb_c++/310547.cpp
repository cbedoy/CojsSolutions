#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <list>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <bitset>
#include <algorithm>
#include <sstream>
#include <cstring>
using namespace std;
typedef long long int lli;
typedef long unsigned long llu;

//definitions
#define mem_prep(varx) memset(varx,0,sizeof(varx))
#define all(x)  (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define rep(i,a,n) for(int i=(a);i<(n);i++) 
#define repe(i,a,n)  for(int i=(a);i<=(n);i++)
#define forsz(i,a,v) rep(i,a,sz(v))
#define repsz(i,v) rep(i,0,sz(v))
#define vi vector<int>
#define vs vector<string>
int main(){
  int cl;  cin>>cl;                 
  while(cl){
    string s,t,temp; cin>>s; int k=0;
    rep(i,0,sz(s)/cl){ rep(j,0,cl){  temp+=s[k++]; }
      if(i%2)reverse(all(temp));
      t+=temp;
      temp.clear();
    }
    rep(i,0,cl){
      rep(j,0,sz(t)/cl){
 cout<<t[i+j*cl];
      }
    }
    cout<<endl;
    cin>>cl;
  }
  return 0;
}
