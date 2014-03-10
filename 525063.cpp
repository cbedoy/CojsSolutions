#include <cstdio>
#include <algorithm>
using namespace std;
int C,P,dws,cp[1001];
pair<int,int>pipes[100001];
int main()
{
    scanf("%d %d",&C,&P);
    for(int i = 0;i < P;i++)
        scanf("%d %d",&pipes[i].first,&pipes[i].second);sort(pipes,pipes+P);
    for(int i = 0;i < P;i++){
        if((pipes[i].first == 1) || (cp[pipes[i].second] > 0))
            cp[pipes[i].second] = pipes[i].second;
        else
            cp[pipes[i].second] = cp[pipes[i].first];
    }
    for(int i = 1;i < C;i++){
        for(int j = i+1;j <= C;j++){
            if(cp[i] != cp[j])
                dws++;
        }
    }
    printf("%d\n",dws);
    return 0;
}
