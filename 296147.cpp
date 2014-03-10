#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 

int main(){
    int n, x1, x2, y1, y2, i;
    cin>>n;
    int res[n];
    for(i=0; i<n; i++){
             cin>>x1>>y1>>x2>>y2;
             int d1 = (x2-x1);
             int d2 = (y2-y1);
             if(d1<0)
                     d1*=-1;
             if(d2<0)
                     d2*=-1;
             res[i] = d1+d2;
    }
    for(i=0; i<n; i++)
             cout<<res[i]<<"\n";
    return 0;   
} 