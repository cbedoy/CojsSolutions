#include<stdio.h>
struct pasajero{
     long i,c,h, q[101];
}pas[100001];
struct camion{
     long i,L;
}cam[100001];
char resc[100001];
long res[100001],lug[100001],p,i,j,k,t,bus,vc,vp;
int main(){
   scanf("%ld",&p);
   vc=vp=100000000;
   for (i=1;i<=p;i++){
      scanf("%ld",&t);scanf("%ld",&pas[t].c);
      pas[t].i=i;
      for (j=1;j<=pas[t].c;j++)
         scanf("%ld",&pas[t].q[j]);
      if (t<vp)
         vp=t;
   }
   scanf("%ld",&bus);
   for (i=1;i<=bus;i++){
      scanf("%ld",&t);scanf("%ld",&cam[t].L);
      cam[t].i=i;
      cam[t].L=51-cam[t].L;
      if (t<vc)
         vc=t;
   }
   while (vp<=100000){
      if (vp+6>vc)
        vc=vp+6;
      while ((vc<=100000) && ((cam[vc].L>50) || (cam[vc].i==0)))
         vc=vc+1;
      if (vc<=100000){
         j=0;
         for (i=1;i<=pas[vp].c;i++)
            if (pas[vp].q[i]+5==vc){
               j=1;
               break;
			}
         if (j==0){
            resc[pas[vp].i]='R';
            res[pas[vp].i]=cam[vc].i;
            lug[pas[vp].i]=cam[vc].L;
            cam[vc].L++;
		 }
         else{
            resc[pas[vp].i]='M';
            res[pas[vp].i]=cam[vc].i;
		 }
      }
      else
         resc[pas[vp].i]='B';
      vp=vp+1;
      while ((vp<=100000) && (pas[vp].i==0))
         vp++;
   }
   for (i=1;i<=p;i++)
     if (resc[i]=='R')
         printf("Bus reservation %ld-%ld.\n",res[i],lug[i]);
     else
     if (resc[i]=='M')
        printf("Missed bus %ld.\n",res[i]);
     else
        printf("Back tomorrow.\n");
}