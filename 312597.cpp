#include <iostream>
#include <cstring>
#include <limits>
#include <cmath>
using namespace std;
const int N = 10000000 + 2, N2 = 1000000 + 1;
long x[N], t1[N2], t2[N2], t3[N2];

void init() { 	memset(x, -1, N); 	x[0] = 1;
	for (int i = 0; i < N2; ++i)  		t1[i] = floor(i - sqrt(i));
	for (int i = 0; i < N2; ++i)    	t2[i] = floor(log(i));
	for (int i = 0; i < N2; ++i)     	t3[i] = floor((double) i * pow(sin(i), 2));
}

long xSub(long i) { if (x[i] != -1) 	return x[i]; return x[i] = (xSub(t1[i]) + xSub(t2[i]) + xSub(t3[i])) % 1000000;
}

int main() { 	init(); int n; 	while (true) {  cin >> n;  	if (n < 0)   break; cout << xSub(n) << endl; } 	return 0; }
