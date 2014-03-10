#include<cstdio>
#define cuadrado(N,M) (N)*(M)  
int main()
{
 register int N,suma = 0;
 scanf("%d",&N );
 suma = (N>0)? cuadrado(N,N+1)>>1 :    
 suma = (cuadrado(N,1-N)+2)>>1;
 printf ("%d",suma); 
 return 0;
}