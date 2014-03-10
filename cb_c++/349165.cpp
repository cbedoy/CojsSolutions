
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int cas,a,b;cin >> cas;while(cas--){cin >>a>>b;int sol = 0;while(a<=b){sol += __builtin_popcount(a);
			a++;}cout << sol << endl;}return 0;}

