#include <cstdio>;
#include <iostream>;

using namespace std;
int n;
int m[102][102];
int suma,sumT;
int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d",&m[i + 1][j]);
			m[i + 1][j] += m[i][j];
		}
	}
	suma = -1270001;
	for (int fi = 1; fi <= n; ++fi) {
		for (int fj = fi; fj <= n; ++fj) {
			sumT =0;
			for (int col = 0; col < n; ++col) {
				int val = m[fj][col] - m[fi - 1][col];
				if(sumT < 0){
					sumT = 0;
				}
				sumT+=val;
				if(sumT > suma){
					suma = sumT;
				}
			}
		}
	}
	printf("%d",suma);
}