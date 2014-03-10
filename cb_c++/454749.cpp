#include <iostream>


using namespace std;

inline void mostrar(int campo[][102],int R, int C){
    C-=1;
    for(int r = 1; r<R; r+=1){
        for(int c = 1; c<C; c+=1)
            cout<<campo[r][c]<<" ";
        cout<<campo[r][C]<<endl;
    }    
}

inline int valor(int h,int v1,int v2,int v3,int v4, int N){
        int e = h==0?N-1:h-1;
        if( v1 == e || v2 == e || v3 == e || v4 == e )
            return e;
        return h;
}

inline void calcular(int campo1[][102], int campo2[][102],int N, int R,int C){
    for(int r = 1; r<R; r+=1)
        for(int c = 1; c<C; c+=1)
            campo2[r][c] = valor(campo1[r][c],campo1[r-1][c],campo1[r+1][c],campo1[r][c-1],campo1[r][c+1],N);
}
int main(){
    int campo1[102][102];
    int campo2[102][102];
    for(int c = 0; c<101; c++){
        campo1[c][0] = -1; campo1[0][c] = -1;
        campo2[c][0] = -1; campo2[0][c] = -1;
    }
    int N,R,C,K;
    cin>>N>>R>>C>>K;
    while(N){
        R+=1;
        C+=1;
	//se usa -1 para controlar que no se salga de la matriz
        for(int r = 1; r<R; r+=1){
            for(int c = 1; c<C; c+=1){
                cin>>campo1[r][c];
            }
            campo1[r][C] = -1;
            campo2[r][C] = -1;
        }
        for(int c=0; c<C; c+=1){
            campo1[R][c]= -1;
            campo2[R][c]= -1;
        }
	//simulando todas las batallas
        for(int k=0; k<K; k++){
            calcular(campo1,campo2,N,R,C);
            k++;
            if(k<K)
                calcular(campo2,campo1,N,R,C);
        }
        if(K%2 == 0) mostrar(campo1,R,C);
        else         mostrar(campo2,R,C);
    cin>>N>>R>>C>>K;
    }
}