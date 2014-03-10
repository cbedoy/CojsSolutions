#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b, c;
    while(cin>>a>>b>>c){
    int r = a*100+b*10+c;
    if(r == 100 || r==11)
        cout<<"A"<<endl;
    else if(r==10 || r== 101)
         cout<<"B"<<endl;
    else if(r==1 || r== 110)
        cout<<"C"<<endl;
    else
        cout<<"*"<<endl;
    }
    return 0;
}
