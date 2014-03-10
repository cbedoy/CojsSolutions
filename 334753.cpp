#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){double S,D,k;while(cin>>S>>D){k=sqrt(2.0*D+S*(S-1.0)+0.25)-0.5;printf( "%.0lf\n",ceil(k));}return 0;}