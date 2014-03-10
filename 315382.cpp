#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
long i,j,k,m=-1,q,L,s,res[2000],ll;
char cad[2010];
int main (){while(scanf("%s",cad)>0){k++;
       L=strlen(cad);
	   s=0;
	   for(i=0;i<L;i++)
		   if(cad[i]>='a' && cad[i]<='z')
		   s+=cad[i]-'a';
	   if (s>m){
		   m=s;
		   res[0]=k;
		   ll=0;
	   }
	   else
	   if (s==m){
	      ll++;
		  res[ll]=k;
	   }
	}
	printf("%ld\n",m);
	for(i=0;i<=ll;i++)
	printf("%ld\n",res[i]);
}