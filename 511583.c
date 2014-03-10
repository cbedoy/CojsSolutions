#include<stdio.h>
long long a[1001],y,b[1001],n,k,min,c[1001][1001],d[1001],p[1001],x,i,j,s;
int main(){
while(scanf("%lld %lld",&n,&k)==2){
for(i=1;i<=n;i++){
scanf("%lld %lld",&d[i],&p[i]);
a[i]=a[i-1]+p[i];
b[i]=b[i-1]+d[i]*p[i];
}

for(i=2;i<=n;i++){
c[i][1]=d[i]*(a[i-1])-b[i-1];
y=k+i-n;
if(2>y)
y=2;
for(j=y;j<i&&j<=k;j++){
min=d[i]*(a[i-1]-a[j-1])-b[i-1]+b[j-1];
for(s=j;s<=i-1;s++){
x=c[s][j-1]+d[i]*(a[i-1]-a[s])-b[i-1]+b[s];
if(x<min)
min=x;
}
c[i][j]=min;
}
}

printf("%lld\n",c[n][k]);
}
}
