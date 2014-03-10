#include <iostream>
#include <string>
using namespace std;int main(){string a;int n;cin>>n;while(n--){cin>>a;char x=a[a.length()-1];if(x=='0'||x=='2'||x=='4'||x=='6'||x=='8')cout<<"even"<<endl;else cout<<"odd"<<endl;}return 0;}
