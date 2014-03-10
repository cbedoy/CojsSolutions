#include <stdio.h>

using namespace std;

int t, x1, y1, x2, y2, tt;

int main()
{
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
        if(x1>x2){
            tt=x2;
            x2=x1;
            x1=tt;
        }
        if(y1>y2){
            tt=y2;
            y2=y1;
            y1=tt;
        }
        printf("%d\n", (x2-x1)+(y2-y1));
    }

    return 0;
}