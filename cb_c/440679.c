# include <stdio.h>
#include <string.h>
 
typedef struct { int x,  y;  } POINT;
 
POINT p[100];
int AA, n;
 
int compare( POINT *a, POINT *b){
  if( a->y != b->y)
    return a->y - b->y;   
  return a->x - b->x;
}
 
int min( int a, int b){ return a < b ? a: b;}
int max( int a, int b){ return a > b ? a: b;}
 
int din[51][32][32][32][32];
int mapMax[100];
int mapMin[100];
 
int ladosMax[100];
int ladosMin[100];
 
int solve( int position, int A, int B, int a, int b){
  int res = (1<<22), path = -1, tres, cst = 0;
  if( position >= n ) return 0;
  if( din[position][A][B][a][b] != -1) return din[position][A][B][a][b];
  if( p[position].x <= a || p[position].x >= b ) 
    return din[position][A][B][a][b] = solve( position + 1, A, B, a, b);
   /* ARRIBA */
  if( p[position].y <= mapMin[ p[ position ].x ] && p[ position ].x < B && p[ position ].x > A){
     tres = solve( position + 1 , A, B, a, b ) + p[ position ].y ;
     if( tres < res ){
        res = tres;
        path = 0;
        cst = p[ position ].y;
     }
  }
  /* IZQUIERDA */
  if( p[position].x <= ladosMin[ p[ position ].y ] && a == 0 ){
     tres = solve( position + 1 , max( A, p[ position].x), B, a, b ) + p[ position ].x ;
     if( tres < res){
        res = tres;
        path = 1;
        cst = p[ position ].x;  
     }
  }
  /* DERECHO */
  if( p[position].x >= ladosMax[ p[ position ].y ] && b == 31 ){
     tres =  solve( position + 1 , A, min( B, p[position].x ), a, b ) + ( AA - p[ position ].x);
     if(tres < res){
       res = tres;
       path = 2;
       cst =  ( AA - p[ position ].x);
     }
  }
  /* ABAJO */
  if( p[position].y >= mapMax[ p[ position ].x ]){
     tres = solve( position + 1 , A, B, a, p[ position].x  )  + solve( position + 1, A, B, p[ position ].x , b)+ ( AA - p[ position ].y );
     if( tres < res){
        res = tres;
        path = 3;   
        cst = ( AA - p[ position ].y );
     }
  }
/*  printf("(%d %d) %d %d %d %d %d -> %d -> path %d cost %d\n", p[position].x, p[ position].y, position, A, B, a, b, res, path, cst);*/
  return din[position][A][B][a][b] = res;   
}
 
main(){
  int x, res;
  while( scanf("%d %d", &AA, &n) != EOF ){
     memset( din, -1, sizeof( din ));
     for( x = 0; x <= AA; x++){
        mapMax[ x ] = -(1<<22);
        mapMin[ x ] = (1<<22);
        ladosMax[x] = -(1<<22);
        ladosMin[x] = (1<<22);
     }
     for( x = 0; x < n; x++){
        scanf("%d %d", &p[x].x, &p[x].y);   
        mapMax[ p[x].x ] = max(mapMax[ p[x].x ], p[x].y);
        mapMin[ p[x].x ] = min(mapMin[ p[x].x ], p[x].y);
        ladosMax[ p[x].y ] = max(ladosMax[ p[x].y ] ,  p[x].x);
        ladosMin[ p[x].y ] = min(ladosMin[ p[x].y ] ,  p[x].x);
     }
     qsort( p, n, sizeof( POINT ), compare );
     res = solve( 0, 0, 31, 0, 31);
     if(res >= (1<<22))
       printf("No solution\n");
     else
       printf("The total length of wire used is %d\n", res);
  }
  return 0; 
}