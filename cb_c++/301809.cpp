#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    int n, i, vueltas=0, suma=0, v;
    cin>>n;
    while(n!=-1){     
        for(i=0; i<n; i++){
            cin>>v;
            suma+=v;
            if(suma%100==0)
                 vueltas++;
        }
        cout<<vueltas<<"\n";
        cin>>n;     
        vueltas=0; suma=0;           
    }
    return 0;   
}