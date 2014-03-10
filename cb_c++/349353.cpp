#include <iostream>
#include <string>
using namespace std;int main(){int n,m,x;cin>>n;while(n--){cin>>m;int pa=0, im=0;while(m--){cin>>x;if(x%2==0)pa++;else im++;}cout<<pa<<" even and "<<im<<" odd."<<endl;     }    return 0;}
