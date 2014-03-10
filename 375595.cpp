#include <iostream>
using namespace std;
int hannoi(int n, char a, char b, char c);
int mov=0;
int main(){
    int n;
    cin>>n;
    cout<<"You needs "<<hannoi(n, '1', '2', '3')<<" moves."<<endl;
    cin>>n;
    
    return 0;
    }
    
int hannoi(int n, char a, char b, char c){
    if(n >0){
        hannoi(n-1, a, c, b);
        cout<<"Move ring from stick "<<a<<" to stick "<<c<<"."<<endl;     
        mov++;
        hannoi(n-1, b, a, c); 
    }
    return mov;
    }
