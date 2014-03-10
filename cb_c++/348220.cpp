#include <iostream>
using namespace std;int main(){int a,b;cin>>a>>b;for(int i=a;i>0;i--){for(int j=1;j<=b;j++){if(a%i==0 && b%j ==0){cout<<a/i<<" "<<j<<endl;}}}return 0;}
