#include <stdio.h>
#include <math.h>
int n, t;
int main(){
  scanf("%d",&t);
  while(t--){ scanf("%d",&n); if(n == 1){ printf("1\n");  continue; }
    printf("%d\n",(int)(floor((log(2*3.141592653589793238*n)/2+n*(log(n)-log(2.718281828459045235)))/log(10))+1));
  }
  return 0;
}
