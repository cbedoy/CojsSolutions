#include <stdio.h>
inline int inverse(int n){int rev = 0, base = 1;while(n){rev = rev * 10 + n % 10;n /= 10;}return rev;}inline bool isElegant(int n){if(n < inverse(n))return true;return false;}int n = 0;int main(){while(scanf("%d",&n) != EOF)printf("%s\n",((isElegant(n)) ? "YES" : "NO"));return 0;}
