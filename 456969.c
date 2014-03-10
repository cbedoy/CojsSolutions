#include <stdio.h>

int rate(int n)
{
if(n>1000000) return 4979900+7*(n-1000000);
if(n>10000) return 29900+5*(n-10000);
if(n>100) return 200+3*(n-100);
return 2*n;
}

int main()
{
int i,j;

int A,B;
while(scanf("%d%d", &A, &B))
{
   if(A==0 && B==0) break;

   int total=(A-4979900)/7+1000000;
   if(A<=4979900) total=(A-29900)/5+10000;
   if(A<=29900) total=(A-200)/3+100;
   if(A<=200) total=A/2;

   i=0;
   j=total;
   while(i<j)
   {
    int m=(i+j)/2;
    if(rate(total-m)-rate(m)<=B)
     j=m;
    else
     i=m+1;
   }
   printf("%d\n", rate(i));
}

return 0;
}