#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string l, x;
   while(cin>>l){
        x = l;
        //sort(l.begin(), l.end());
        reverse(l.begin(), l.end());
        int a = atoi(l.c_str());
        int b = atoi(x.c_str());
        cout<<((a>b)?"YES":"NO")<<endl;
   }
return 0;
}
