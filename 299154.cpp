#include<iostream>
using namespace std; 
int main(){
    long long a, b, i, r=0;
    cin>>a>>b;
    for(i=1; i<a; i++)   r+=(i*b); 
    cout<<r;
    return 0;   
}