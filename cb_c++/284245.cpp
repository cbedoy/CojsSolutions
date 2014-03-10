#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define REP(i,a) for(i=0;i<a;i++)

int array[1000][1000];

void sum(int n)
{
    int i=0;
    REP(i,n)
    {
        array[n-1][i]+=max((array[n][i]),(array[n][i+1]));
    }
}

int main()
{
  int i,j,n,test,l;
  scanf("%d",&test);
  while(test--)
  {
        scanf("%d",&n);
        REP(i,n)
        {
            REP(j,i+1)
            {
                cin>>array[i][j];
            }
        }
        while(n--)
        {
            sum(n);
        }
        printf("%d\n",array[0][0]);
  }

    return 0;
}