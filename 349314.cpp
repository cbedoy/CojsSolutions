
#include <iostream>
#include <cstdio>
using namespace std;

#define FOR(i,a,b)  for(int i=(a),_##i=(b);i<_##i;++i)
#define F(i,a)      FOR(i,0,a)


typedef long long   LL;

int vleft[100001], vright[100001];

int main(){
   int n, x, y, m;
   scanf("%d %d", &n, &m);
   while(n){
      FOR(i, 1, n+1){
         vleft[i] = i-1;
         vright[i] = i+1;
      }
      F(i, m){
         scanf("%d %d", &x, &y);
         if(vleft[x] == 0) printf("* ");
         else printf("%d ", vleft[x]);
         if(vright[y] == n+1) printf("*\n");
         else printf("%d\n", vright[y]);
         vleft[ vright[y]] = vleft[x];
         vright[ vleft[x]] = vright[y];
      }
      printf("-\n");
      scanf("%d %d", &n, &m);
   }
}
