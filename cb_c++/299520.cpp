#include<iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long valor(long long a, long long b, long long r){
     if(a==0)
        return r;     
     else
        return r+=valor(a-1, b, a*b); 
}
int main(){
    long long a, b, i, r=0;
    cin>>a>>b;
    cout<<valor(a-1,b, r);
    return 0;   
}
