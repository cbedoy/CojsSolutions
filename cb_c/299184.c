#include<stdio.h>
int main(){
 int sides[3],n,zero=0,max,pos,i;
 do{
    pos=-1;
    max=0;
 for (i=0;i<3;i++) {
  scanf("%d",&n);
  if(n==0){
    zero=1;
    break;
  }
  if(n>max){
   max=n;
   pos=i;
  }
  sides[i]=n;
 }
 if(zero==0){
  max=0;
  for (i=0;i<3;i++){
   if(i!=pos) max+=sides[i]*sides[i];
  }
  if(sides[pos]*sides[pos] == max) printf("right\n");
     else printf("wrong\n");
 }
}while(!zero);
 return 0;
}