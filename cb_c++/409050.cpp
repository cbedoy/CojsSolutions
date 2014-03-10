#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;int main(){int n;const double PI = atan(1)*4;cin>>n;while(n--){int t;cin>>t;double suma=0;while(t--){double a, b;cin>>a>>b;suma+= (PI*(a*a)*b);}printf("%.2f\n", suma);}return 0;}
