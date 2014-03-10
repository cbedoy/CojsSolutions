#include <stdio.h>
#include <string.h>

int main()
{
	int c, n, i, j;
	char s[101], t;

	scanf("%u", &c);
	while (c)
	{
		scanf("%s", s);
		n = strlen(s);
		c = n/c;

		for (i=0; i<n; i+=c)
			for (j=0; j<c/2; ++j)
			{
				t = s[i+j];
				s[i+j] = s[i+c-j-1];
				s[i+c-j-1] = t;
			}

		printf("%s\n", s);
		scanf("%u", &c);
	}

	return 0;
}