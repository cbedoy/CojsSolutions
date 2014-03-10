#include<stdio.h>
#include<string.h>
char word[25];
int len;
int isVowel( char ch ){
if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
return 1;
return 0;
}
int rule_1(){
int i;
for( i=0; i<len; i++ )
if( isVowel( word[i] ) )
return 1;
return 0;
}

int rule_2(){
int i, v=0, c=0;
for( i=0; i<len; i++ ){
if( isVowel( word[i] ) ){
v++; c=0;
}else{
c++; v=0;
}
if( v==3 || c==3 )
return 0;
}
return 1;
}
int rule_3(){
int i;
for( i=1; i<len; i++ ){
if( word[i]==word[i-1] && word[i]!='e' && word[i]!='o' )
return 0;
}
return 1;
}


int main(){
while(1){
scanf( "%s", word);
if( strcmp( word, "end" )==0 )
break;
len = strlen( word );
if( rule_1() && rule_2() && rule_3() )
printf( "<%s> is acceptable.\n", word );
else
printf( "<%s> is not acceptable.\n", word );
}
return 0;
}