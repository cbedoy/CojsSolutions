#include <iostream>
using namespace std;
int main(){

    int N,M,G;

    cin>>N>>M>>G;
        int cond[40][2];
    while(N){
        for(int c = 0; c<40; c++){cond[c][0] = 0; cond[c][1] = 0;}
        int juegos[40]={0};
        int a, b;
        char r;
        for(int g = 0; g<G; g++){
            cin>>a>>r>>b;
            switch(r){
                case '<': cond[b][1]+=2; break;
                case '>': cond[a][1]+=2; break;
                case '=': cond[b][1]+=1; cond[a][1]+=1; break;
            }
            if(!a)juegos[b]+=1;
            if(!b)juegos[a]+=1;
            cond[a][0]+=1;
            cond[b][0]+=1;
        }

        for(int c = 1; c<N;c++){
            cond[0][1]+=(M-juegos[c])*2;
            cond[0][0]+=(M-juegos[c]);
            cond[c][0]+=(M-juegos[c]);
        }
        double est = cond[0][1]*1.0/cond[0][0];
        bool gano = true;
        for(int c=1; c<N && gano;c++){
            double e2 = (cond[c][1]+(((M*N-1)-cond[c][0])==1?M:0))*1.0/((N-1)*M);
            gano = est > e2;
        }
        cout<<(gano?'Y':'N')<<endl;
    cin>>N>>M>>G;
    }
return 0;

}