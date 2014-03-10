#include <iostream>     
#include <algorithm>
using namespace std;int main(){int n = 1500;int l2 = 0;int l3 = 0;int l5 = 0;long long r[n];r[0] = 1;for (int i=1;i<n;++i) {long long p = r[i-1];while (r[l2] * 2 <= p) { ++l2;}while (r[l3] * 3 <= p) { ++l3;}while (r[l5] * 5 <= p) { ++l5;}long long c1 = r[l2] * 2;long long c2 = r[l3] * 3;long long c3 = r[l5] * 5;r[i] = min(c1, min(c2, c3));}int nn = 1;while(true){cin>>nn;if(nn==0) break;cout<<r[--nn]<<endl;;}}
