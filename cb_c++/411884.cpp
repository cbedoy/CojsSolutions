#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
 
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF )
    {
        int cont = 0;
        char s[100];
        for(int i=a;i<=b;i++)
        {
            int j;
            sprintf(s,"%d",i);
            int len = strlen(s);
            sort(s,s+len);
            for(j=1;j<len;j++)
                if ( s[j] == s[j-1] )
                    break;
            if ( j == len )
                cont++;
        }
        printf("%d\n",cont);
    }
    return 0;
}