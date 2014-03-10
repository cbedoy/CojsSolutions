#include<iostream>
#include <cstdlib>
using namespace std;

int main (){
    int n, i, pos;
    float temp, may=0;
    cin>>n;
    for(i=0; i<n; i++){
             cin>>temp;
             if(temp>=may){
                 may=temp;
                 pos=i+1;
             }
    }
    cout<<pos;
    return 0;
}