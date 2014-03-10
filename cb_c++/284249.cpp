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
    #define all(i) (i).begin(), (i).end()


    int main()
    {
    /*
       freopen("input.txt","r",stdin);
    */
        int matriz[100][100];
        int n,i,j,s,cnt1,cnt2,fil,col,fila,columna;
        while(~scanf("%d",&n) && n!=0)
        {
            s=0;
            REP(i,n)
            {
                REP(j,n)
                {
                    cin>>matriz[i][j];
                }
            }

            cnt1=0,cnt2=0;
            REP(i,n)
            {
                fil=0;col=0;
                REP(j,n)
                {
                    if(matriz[i][j]==1)
                        fil++;
                    if(matriz[j][i]==1)
                        col++;
                }
                if(fil&1)//si es  impar
                {
                    fila=i;
                    cnt1++;
                }
                if(col&1)//si es impar
                {
                    columna=i;
                    cnt2++;
                }


            }


            if(cnt1==0 && cnt2==0)
                printf("OK\n");
            else if(cnt1==1 && cnt2==1)
                printf("Change bit (%d,%d)\n",fila+1,columna+1);
            else
                printf("Corrupt\n");
        }
    /*
        fclose(stdin);
    */
       return 0;
    }
