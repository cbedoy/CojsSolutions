#include <iostream>
using namespace std; int main(){int n, v;cin>>n;while(n--){cin>>v;cout<<((v==1)?1:(v*v)+((v-1)*(v-1)))<<endl;}return 0;}