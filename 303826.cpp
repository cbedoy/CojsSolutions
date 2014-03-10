#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int i, n, a, b, c;
    double r;
    cin>>n;
    for(i=0; i<n; i++){
       cin>>a>>b>>c;
       r = (double)c/(a+b);
       printf("%.4lf\n", r);
    }
    return 0;
}