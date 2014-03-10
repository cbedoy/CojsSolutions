#include <iostream>
using namespace std;
int main(){long long a,b;int n;cin>>n;for(int i=0; i<n; i++){cin>>a>>b; b=b*(b +1)*(b+ 2)*(b+ 3); b=b>>2; --a; a=a*(a+ 1)*(a+ 2)*(a+ 3);      a=a>>2; b-=a; cout<<b%100<<endl; } return 0; }