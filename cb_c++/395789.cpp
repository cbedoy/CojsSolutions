#include <iostream>
using namespace std;int main(){int n, k, v, s; cin>>n; while(n--){cin>>k; s=0;for(int i=0; i<k; i++){cin>>v; s+=v;} cout<<s-(k-1)<<endl; 	}return 0;}