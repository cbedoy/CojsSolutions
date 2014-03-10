#include <iostream>
#include <string>
using namespace std;int main(){string linea;int t;cin>>t;while(t--){cin>>linea;if(linea[linea.length()-1] == '5' || linea[linea.length()-1] == '0')cout<<"YES"<<endl;else cout<<"NO"<<endl;}return 0;}
