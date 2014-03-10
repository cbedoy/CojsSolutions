#include<stdio.h>
#include<math.h>
int main(){long long N, n;long C=1;while( 1 ){scanf("%lld", &N);if( !N )break;n = (3 + sqrt(9.0+8.0*(N-1)))/2;printf("Case %ld: %lld\n", C++, n+1);}return 0;}