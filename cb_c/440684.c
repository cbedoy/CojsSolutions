# include <stdio.h>
# include <string.h>
 
# define MOD ((long long)1000000000)
 
 
long long pot( long long a, long long b){
    long long r;
    if( b == 0 ) return 1;
    if( b == 1 ) return a % MOD;
    r = pot( a , b / 2);
    r = (r * r ) % MOD;
    if(b % 2 == 1) r = (r * a) % MOD;
    return r;
}
 
 
main(){
   int ncases, cases, a, b;
   for( scanf("%d", &ncases), cases = 1; cases <= ncases ; cases++){
      scanf("%d %d", &a, &b);
      printf("%lld\n", pot(((long long)a)%MOD, (long long)b));
   }
   return 0;    
}