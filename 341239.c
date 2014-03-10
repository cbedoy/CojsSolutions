#include <stdio.h>

int main() {int n;int t;long long a;long long sum;scanf("%d ", &t);for (int tt=0; tt<t; tt++) {
		sum=0;scanf("%d ", &n);
		for (int i=0; i<n; i++) {scanf("%lld ", &a);sum+=(a%n);sum%=n;}
		if (sum%n==0) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}