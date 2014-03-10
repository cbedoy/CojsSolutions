#include <iostream>
using namespace std;

int main(){
    bool numeros[1000001];
    for ( int i = 1; i <= 1000001; i++ )
        numeros[i] = true; //EN PRINCIPIO TODOS LOS NUMEROS SE CONSIDERAN PRIMOS
    for ( int j = 2; j <= 1000001; j++ )
        for ( int k = 2; k <= (1000001)/j; k++ )
            numeros[k*j] = false;
    int a, b;


    while(true){
        cin>>a>>b;
        int cont=0;
        if(a==0 && b==0)break;
        for(int i=a; i<=b; i++)
            if(numeros[i])
                cont++;
        cout<<cont<<endl;
    }
    return 0;
}