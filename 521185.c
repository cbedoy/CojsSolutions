#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ARISTAS 5000000
#define MAX_NODES 2000













typedef struct { int a, b, cost; } ARISTA;

ARISTA A[MAX_ARISTAS + 1];


int set[MAX_NODES + 1];

int min( int a, int b){ return a < b ? a: b; }

int getSet( int nodo ){
  return set[ nodo ] == nodo ? nodo : (set[nodo] = getSet( set[nodo] ) );
}

int compare(ARISTA *a, ARISTA *b){ return a->cost - b->cost; }

int kruskal(int N, int M){
  int x, sol = 0, a, b, contAristaAgregadas  = 0;
  for( x = 0 ; x <= N; x++) set[x] = x;
  qsort( A, M, sizeof( ARISTA ), compare );
  for( x = 0; x < M; x++){
     a = getSet( A[x].a);
     b = getSet( A[x].b);
     if( a != b){
       contAristaAgregadas ++;
       set[a] = b;
       sol += A[x].cost;
     }
  }
  return ( contAristaAgregadas  == N - 1 ) ? sol : (1<<28);
}

main(){
  int sol, ncases, cases, x, y;
  int N, M, C;
  for( scanf("%d", &ncases), cases = 1; cases <= ncases ; cases++ ){
     scanf("%d %d %d", &N, &M, &C);
     for( x = 0; x < M; x++){
      scanf("%d %d %d", &A[x].a, &A[x].b, &A[x].cost);
     }
     sol = kruskal(N, M);
     for( x = 1; x <= N; x++){
     for( y = x + 1; y <= N ; y++) {
        A[ M ].a = x;
        A[ M ].b = y;
        A[ M ].cost = C;
        M++;
     }
     }
     sol =  min( sol, kruskal(N, M) + C);
     printf("%d\n", sol);

  }
  }
