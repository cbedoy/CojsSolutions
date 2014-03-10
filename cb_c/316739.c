#include<stdio.h>
    char cad[10],arr[8][8]={{'A','A','A','A','A','A','A','A'},{'A','B','B','B','B','B','B','A'},{'A','B','C','C','C','C','B','A'},{'A','B','C','D','D','C','B','A'},{'A','B','C','D','D','C','B','A'},{'A','B','C','C','C','C','B','A'},{'A','B','B','B','B','B','B','A'},
                            {'A','A','A','A','A','A','A','A'}};                 			  
   long p[100],x,y,w,b;
int main(){  p['P']=1;  p['B']=3;  p['N']=3;  p['T']=5;  p['Q']=11;  p['K']=0;
  while(scanf("%s",cad)>0){ x=arr[cad[0]-'a'][cad[1]-'1']-'A'+1; scanf("%s",cad); y=p[cad[1]];	 
     if (cad[0]=='W') w=w+x*y; else       b=b+x*y;  }  printf("%ld %ld\n",w,b);  if (b>w)    printf("Advantage for black pieces\n"); else  if (w>b)    printf("Advantage for white pieces\n");  else     printf("No decisive advantages\n");}