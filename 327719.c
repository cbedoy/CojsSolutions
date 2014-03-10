#include <stdio.h>
#include <strings.h>
#define TRUE 1
#define FALSE 0
#define MAX 1000
int n,c,p;
int polepos[MAX];
int main (void)
{
int i,tmp,ok;
while (scanf("%d",&n)==1 && n>0) {
bzero(polepos,n*sizeof(int));
ok=TRUE;
for (i=0;i<n;i++) {
scanf("%d %d",&c,&p);
tmp=i+p;
if (tmp>=0 && tmp<n && polepos[tmp]==0)
polepos[tmp]=c;
else
ok=FALSE;
}
if (ok) {
printf("%d",polepos[0]);
for (i=1;i<n;i++) {
printf(" %d",polepos[i]);
}
printf("\n");
}
else
printf("-1\n");
}
return(0);
}