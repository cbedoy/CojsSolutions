#include<iostream>
using namespace std; 
int main(){int n, c, sum, i, cv;cin>>n;while(n--){cin>>c; sum=0;for(i=1; i<c; i++){if(c%i==0)sum+=i;}if(sum==c){cout<<"Perfect"<<endl;}else if(sum<c){cout<<"Deficient"<<endl;}
else{cout<<"Abundant"<<endl;}}return 0;}