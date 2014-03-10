#define CICLE(i,a,b,c) for(int i=(a); i<=(b); i += (c))
#include <stdio.h>
int t, a, b, c[1001];int main(){CICLE(p,1,1000,1){int n = p;while(n > 0){c[p] += n%2;n /= 2;}
  c[p] += c[p-1];}scanf("%d",&t);while(t--){scanf("%d%d",&a,&b);printf("%d\n",c[b]-c[a-1]);}}