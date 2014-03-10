#include <stdio.h>
#include <string.h>
char cad[256]; int num, k, i;
int main(){ scanf("%s", cad); while (cad[0]!='0'){ num = 0; k = 2; for (i=strlen(cad)-1; i >=0; i--) {num += (cad[i]-48)*(k-1);
k *= 2; } printf("%d\n", num); scanf("%s", cad); }return 0;}