#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, m;
    string v;
    cin>>n;
    while(n--){
        cin>>m;
        int pa=0, im=0;
        while(m--){
            cin>>v;
            char t = v[v.length()-1];
            if(t=='0' ||t=='2'||t=='4'||t=='6'||t=='8')
               pa++;
            else
                im++;
        }
        cout<<pa<<" even and "<<im<<" odd."<<endl;     
    }    
    return 0;
}
