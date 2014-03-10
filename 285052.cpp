#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n, i, j;
    cin>>n;
    int vector[n];
    
    for(i=0; i<n; i++){
             cin>>vector[i];
             for(j=0; j<3; j++){
                      vector[i] +=3;
                      vector[i] *=2;
             }
    }
    for(i=0; i<n; i++)
             cout<<vector[i]<<"\n";
    return 0;    
}