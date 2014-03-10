#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>


#define rep(i,a,n) for(int i=(a);i<(n);i++) 
#define repe(i,a,n)  for(int i=(a);i<=(n);i++)
using namespace std;
int main(){
  int nTests;
  scanf("%d ",&nTests);
  repe(test,1,nTests) {
    int a,b;
    cin>>a>>b;
    if(a!=b&&a-b!=2){cout<<"No Number\n";continue;}
    if(a%2==0&&b%2==0)cout<<a+b<<endl;
    else cout<<a+b-1<<endl;
  }
 
  return 0;
}