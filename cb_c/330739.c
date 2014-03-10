#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define EPS 1e-12
double arr[101][2],qx,qy;long i,j,k,n,res,casos,p;double det(double x1, double y1, double x2, double y2, double x3, double y3){return x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3;}int main(){ scanf("%ld",&casos); while(casos>0){scanf("%ld",&n);for(i=0;i<n;i++)   scanf("%lf%lf",&arr[i][0],&arr[i][1]);
   arr[n][0]=arr[0][0]; arr[n][1]=arr[0][1]; scanf("%ld",&p);for(j=0;j<p;j++){ scanf("%lf%lf",&qx,&qy); res=0;
   for(i=0;i<n;i++)if(det(arr[i][0],arr[i][1],qx,qy,arr[i+1][0],arr[i+1][1])>0)  res++;
   printf("%ld\n",res); }printf("\n"); casos--; }}