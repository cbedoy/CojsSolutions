#include <stdio.h>
typedef struct {
long long int n;
int consumo;
} Dado;
const int f[13] = {-1, 306, 337, 0, 31, 61, 92, 122, 153, 184, 214, 245, 275};
int main (int argc, char *noargs[]) {
int N, i, res, total, dia, mes, ano, a, b, c;
Dado ant, cor;
for (;;) {
scanf ("%d", &N);
if (N == 0) break;
ant.n = -1;
res = total = 0;
for (i = 0; i < N; ++i) {
scanf ("%d %d %d %d", &dia, &mes, &ano, &cor.consumo);
if (mes <= 2) --ano;
a = ano / 4;
b = ano / 100;
c = ano / 400;
cor.n = 0L + dia + f[mes] + ano * 365 + a - b + c;
if (cor.n == ant.n + 1) {
++res;
total += cor.consumo - ant.consumo;
}
ant = cor;
}
printf ("%d %d\n", res, total);
}
return 0;
}