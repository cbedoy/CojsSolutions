using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>

int main()
{
    int N, l, NoOfPieces;
    string str;
    char c;
    while(scanf("%d", &N)!=EOF) {
        if(N==0)
            break;
        scanf("%c", &c);
        getline(cin, str);
        NoOfPieces = str.length()/N;
        for(int i=0; i<N; i++)
        {
            l=i*NoOfPieces;
            for(int j=0; j<NoOfPieces/2; j++)
            {
                c = str[l+j];
                str[l+j] = str[l + NoOfPieces - 1 - j];
                str[l + NoOfPieces - 1 - j] = c;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
