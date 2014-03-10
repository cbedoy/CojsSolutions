#include<stdio.h>
#include<ctype.h>
long count( char c ){if( isdigit(c))return c-'0';if( isupper(c) )return c-'A'+10;if( islower(c))return c-'a'+36;return 0;}int main(){char c;  long suma, r, b;while( scanf( "%c", &c )==1 ){if( c=='\n' )continue;suma= 0;b = 1; while( c!='\n' ){r = count( c );suma += r;if( r > b ) b = r;scanf( "%c", &c );}for( ; b<62; b++ )if( (suma%b)==0 ){printf( "%ld\n", b+1 );break;}if( b==62 ) puts( "such number is impossible!" );}return 0;}
