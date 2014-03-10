#include<stdio.h>
#include<algorithm>
using namespace std;
int cas , n , x,N[10005];char C[25];int main(){
	scanf("%d",&cas);while(cas--){scanf("%d",&n);for(int i = 0 ; i < n ; i++)		scanf("%s%d",C,&N[i]);
	sort(N,N+n);int v = 0;for(int i = 0 ; i < n ; i++)  v += abs(i+1 - N[i]);
	 printf("%d\n",v);}return 0;}