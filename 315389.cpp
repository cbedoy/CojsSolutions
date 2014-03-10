#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
long N[10],cif[10],L,i,n,j,k,res;
char num[10];
bool esprimo(long p){
long t;
  if (p==1)
	  return false;
  else
  if (p==2)
	  return true;
  else
  if (p>2  && p%2==0)
	  return false;
  for (t=3;t*t<=p;t=t+2)
	 if (p%t==0)
		 return false;
  return true;
   
}
int main(){ 
  scanf("%s",num);
  L=strlen(num);
  for(i=0;i<L;i++)
     cif[num[i]-'0']++;
  for(i=0;i<10;i++)
	 for(j=0;j<cif[i];j++){
		 N[k]=i;
		 k++;
	 }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  do{
    n=0;
	for(i=0;i<L;i++)
	  n=10*n+N[i];
	if(esprimo(n))
	   res++;
  } while(next_permutation(N,N+L));
  printf("%ld\n",res);
} 