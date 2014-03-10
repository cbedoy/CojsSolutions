#define CICLE(i,a,b,c) for(int i=(a); i<=(b); i += (c))
using namespace std;
#include <algorithm>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
struct Point2DbyX{int x, y;bool operator<(const Point2DbyX &P) const{if(x < P.x) return true;if(x > P.x) return false;return y <= P.y;};
} A[55];
int mark[33][33];
int S, N, B = 1e9;
int minX[33], maxX[33];
int minY[33], maxY[33];

void Compute(int acum, int p, int lowYofUP, int higYofDW, int lowYofRG, int higYofRG){
 if(acum >= B) return; //Bad Partial-Solution...
 if(p == N+1) { B = acum; return; } //Good Final-Solution...
 if(A[p].x == maxX[A[p].y])
 Compute(acum + (S-A[p].x), p+1, lowYofUP, higYofDW, min(lowYofRG,A[p].y), max(higYofRG,A[p].y));

 //Try connecting LF...
 if(A[p].x == minX[A[p].y] && A[p].y < lowYofUP && A[p].y > higYofDW)
 Compute(acum + A[p].x, p+1, lowYofUP, higYofDW, lowYofRG, higYofRG);

 //Try connecting UP...
 if(A[p].y == maxY[A[p].x] && A[p].y > higYofRG)
 Compute(acum + (S-A[p].y), p+1, min(lowYofUP, A[p].y), higYofDW, lowYofRG, higYofRG);

 //Try connecting DW...
 if(A[p].y == minY[A[p].x] && A[p].y < lowYofRG)
 Compute(acum + A[p].y, p+1, lowYofUP, max(higYofDW, A[p].y), lowYofRG, higYofRG);
}
int main()
{
 scanf("%d%d",&S,&N);assert(2 <= S && S <= 30);assert(1 <= N && N <= 50);CICLE(p,1,S-1,1) minX[p] = minY[p] = S;CICLE(p,1,S-1,1) maxX[p] = maxY[p] = 0;
 CICLE(p,1,N,1)
 {
  scanf("%d%d",&A[p].x,&A[p].y);minX[A[p].y] = min(minX[A[p].y], A[p].x);maxX[A[p].y] = max(maxX[A[p].y], A[p].x);minY[A[p].x] = min(minY[A[p].x], A[p].y);
  maxY[A[p].x] = max(maxY[A[p].x], A[p].y);
  assert(0 == mark[A[p].x][A[p].y]); mark[A[p].x][A[p].y] = 1;
 }
 sort(A+1, A+N+1);
 Compute(0, 1, S, 0, S, 0);
 if(B == 1e9) printf("No solution\n"); else
 printf("The total length of wire used is %d\n",B);
}