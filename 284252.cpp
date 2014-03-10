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

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
#define all(i) (i).begin(), (i).end(),cmp

int value(string cad1,int n)
{
    int s,i,j;
    s=0;
    REP(i,n)
    {
        FOR(j,i+1,n)
        {
            if(cad1[i]=='A')
                break;
            else
            {
                if(cad1[i]>cad1[j])
                    s++;
            }
        }
    }
    return s;
}

bool cmp(pair< int,string > par1,pair< int,string >par2)
{
    if(par1.first==par2.first)
        return(par1.second.compare(par2.second)<0);
    else
        return( par1.first < par2.first );
}

int main()
{
/*
   freopen("input.txt","r",stdin);
*/
    int M,n,m,valor,i,flag=0;
    string cad1;
    vector<pair< int,string > >vec1;
    while(~scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
            break;

        cin.ignore();
        while(m--)
        {
            getline(cin,cad1);
            valor=value(cad1,n);
            vec1.PB(pair<int,string>(valor,cad1));
            cad1.clear();
        }
        sort(all(vec1));
        if(flag)
            printf("\n");
        flag=1;
        REP(i,vec1.size())
        {
            cout<<vec1[i].second<<endl;
        }
        vec1.clear();
    }
/*
    fclose(stdin);
*/
   return 0;
}