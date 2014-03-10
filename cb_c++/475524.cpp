#include <iostream>
using namespace std;struct dato{short esta;};int main(){short n, t, j, k;while(cin>>n>>t){struct dato busos[n];k=t;while(t--){cin>>j;busos[--j].esta=1;}if(n!=k){for(short i=0; i<n; i++){if(busos[i].esta != 1){cout<<(i+1)<<" ";}}cout<<endl;}else{cout<<"*";}}return 0;}
