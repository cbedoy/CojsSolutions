#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std; 
vector<int> v[100001];int memo[1001][1001];int dp(int x,int y){if(x==y)return 0;if(x==1)return 1;if(memo[x][y]!=-1)return memo[x][y];
    bool dev=0;
    for(int i=v[y].size()-1;i>=0;i--){
        if(dp(min(x,v[y][i]),max(x,v[y][i])) ){
            dev=1;
            break;
        }
    }
    memo[x][y]=dev;
    return dev;
}
int main(){int C,P;while(cin>>C>>P){for(int i=0;i<100001;i++)if(v[i].size()>0)v[i].clear();for(int i=0;i<P;i++){int a,b;scanf("%d%d",&a,&b);v[max(a,b)].push_back(min(a,b));}int dev=C-1;memset(memo,-1,sizeof(memo));for(int i=2;i<=C;i++)for(int j=i+1;j<=C;j++){dev+=dp(i,j);}cout<<dev<<endl;}return 0;
}
