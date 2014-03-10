#include <iostream>
#include <string>
using namespace std;
int main(){string a;int n;cin>>n;while(n--){cin>>a;if(a[a.length()-1]=='0'||a[a.length()-1]=='2'||a[a.length()-1]=='4'||a[a.length()-1]=='6'||a[a.length()-1]=='8')cout<<"even"<<endl;else cout<<"odd"<<endl; }return 0;}