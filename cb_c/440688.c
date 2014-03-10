#include <stdio.h>
#include <string.h>
 
char hash[11];
 
main(){
    int n,i,honesto=1;
    char line[20];
    while(gets(line), sscanf(line, "%d",&n)!=EOF&&n!=0){
        gets(line);
        if(strcmp(line,"too high")==0){
            if(hash[n]==2)honesto=0;
            for(i=n;i<=10;i++)hash[i]=1;
        }
        else if(strcmp(line,"too low")==0){
            if(hash[n]==1)honesto=0;
            for(i=n;i>=1;i--)hash[i]=2;
             
        }
        else{
            printf("%s\n",( honesto==1 && hash[n] == 0 )?"Stan may be honest":"Stan is dishonest");
            memset(hash,0,sizeof(hash));
            honesto=1;
        }
    }
    return 0;
    }