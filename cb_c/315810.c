#include <stdio.h>
#include <string.h>
int main() {
	char line[1024]; unsigned int i; unsigned long long out; while (scanf("%s", line) == 1) { if (strcmp(line, "0") == 0) break; out = 0;
for (i = 0; i < strlen(line); ++i, out <<= 1) out += (line[i] - '0');for (i = 0; i < strlen(line); ++i) out -= (line[i] - '0'); printf("%lld\n", out);
}return 0; }