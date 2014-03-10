#include <stdio.h>
#include <string.h>

int main (){
	long N, Len, I, LenA, LenB, Carry, Sum[210], X;
	char A [210], B [210], Temp [210];
	scanf("%ld", &N);
	while ( N ){
		for ( I = 0; I < 210; I++)
			A [I] = B [I] = 48;
		scanf("%s", Temp);
		Len = strlen ( Temp );

		while ( Temp [ Len-1 ] == '0' )
			Len--;
		LenA = 0;
		for ( I = 0; I < Len; I++)
			A [LenA++] = Temp [I];
		scanf("%s", Temp);
		Len = strlen ( Temp );

		while ( Temp [ Len-1  ]== '0')
			Len--;

		LenB = 0;
		for ( I = 0; I < Len; I++)
			B [LenB++] = Temp [I];

		Len = LenA > LenB ? LenA : LenB; 
		Carry = X = 0;
		for ( I = 0; I < Len; I++){
			Carry = ( A [I] - 48 ) + ( B [I] - 48 ) + Carry;
			Sum [X++] = Carry % 10;
			Carry /= 10;
		}
		while ( Carry != 0 ){
			Sum [X++] = Carry % 10;
			Carry /= 10;
		}
		I = 0;
		while ( Sum [I] == 0)
			I++;
		while ( I < X )
			printf("%d", Sum[I++]);
		printf("\n");

		N--;
	}
	return 0;
}
