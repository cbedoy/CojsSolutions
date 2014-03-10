#include<stdio.h>
#include<memory.h>
char ch; char root; int hasNext;
struct tree{char l, r;} T['Z'+1];
void insert( char rt, char ch ){ if( ch<rt ){if( T[rt].l ) insert( T[rt].l, ch ); else T[rt].l = ch;
     }else{ if( T[rt].r ) insert( T[rt].r, ch ); else T[rt].r = ch;}}
void find(){ char line[27]; int i; gets( line );
     if( line[0]=='*' || line[0]=='$' ){root = 0;if( line[0]=='*' )  hasNext = 1;
     }else{find(); if( root ){for( i=0; line[i]; i++ ){ insert( root, line[i] ); }}else{  root = line[0]; }  }        }
void print( char rt ){ if( rt ){putchar( rt ); print( T[rt].l ); print( T[rt].r );}}
int main(){
do{
   memset( T, 0, sizeof( T ) ); hasNext = 0;   find(); print( root ); printf( "\n" ); }while( hasNext ); return 0;
}