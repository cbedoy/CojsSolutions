#include<iostream>
#include<cstdio>
#include<utility>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
#define db(a) cout << #a << " = " << a << endl
using namespace std;
 
int main() {
 #ifdef dennisbot
  freopen("in.in", "r", stdin);
  freopen("ou.out", "w", stdout);
 #endif
 string s, t;
 while (cin >> s >> t) {
  int ss = s.size();
  int tt = t.size();
  if (ss > tt) {
   puts("No");
   continue;
  }
  int start = 0;
  bool success = true;
  for (int i = 0; i < ss && success; i++) {
   while (start < tt && s[i] != t[start++]) ;
   if (s[i] != t[start - 1]) success = false;
  }
  if (success) puts("Yes");
  else puts("No");
 }
 return 0;
}