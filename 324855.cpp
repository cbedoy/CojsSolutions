#include<iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include<iomanip>
using namespace std; 

int main(){
    float n, b;
    while(cin>>n>>b){
         printf("%1.2f\n", (float)(n/b));         
    }
    return 0;   
}