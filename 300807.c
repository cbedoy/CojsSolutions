#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    scanf("%d", &n);
    double sal[n], r;
    for(i=0; i<n; i++){
       scanf("%lf", &r);
       sal[i] = sqrt((pow(r, 2)-pow(r/2, 2)));
       sal[i] = (sal[i]*6*r)/2;
    }
    for(i=0; i<n; i++)
        printf("%.2f\n", sal[i]);
    return 0;
}
