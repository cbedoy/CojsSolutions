#include <iostream>


using namespace std;
inline int consumo(int costo){
    if(costo > 4979900)
        return 1000000+(costo-4979900)/7;
    if(costo > 29900)
        return 10000+(costo-29900)/5;
    if(costo > 200)
        return 100+(costo-200)/3;
    return costo/2;
}

inline int costo(int A, int B){
    int ci, cv, ct;
    ct = consumo(A);
    //ninguno paga mÃ¡s de 100
    cv = (2*ct+B)/4;
    ci = ct-cv;
    if(ci>0 && ci + cv == ct && cv<100 && ci<100)    return ci;
    //vecino paga mÃ¡s de 100 menos de 10000
    cv = (2*ct+B+100)/5;
    ci = ct-cv;
    if(ci>0 && cv>100 && cv<10000 && ci<100)    return ci;
    //vecino paga mas de 10000 y menos de 1000000
    cv = (2*ct+B+20100)/7;
    ci = ct-cv;
    if(ci>0 && cv>10000 && cv<1000000 && ci<100)    return ci;
    //vecino paga mas de 1000000
    cv = (2*ct+B+2020100)/9;
    ci = ct-cv;
    if(ci>0 && cv>1000000 && ci<100)    return ci;
    //i>100 y v>100
    cv = (3*ct+B)/6;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct && cv<10000 && ci<10000)    return ci;
    //i>100 y v>10000
    cv = (3*ct+B+20000)/8;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct && cv<1000000 && ci<10000)    return ci;
    //i>100 y v>1000000
    cv = (3*ct+B+2020000)/10;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct && ci<10000)    return ci;
    //i>10000 y v>10000
    cv = (5*ct+B)/10;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct && cv<1000000 && ci<1000000)    return ci;
    //i>10000 y v>1000000
    cv = (5*ct+B+2000000)/12;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct && ci<1000000)    return ci;
    //i>1000000 y v>1000000
    cv = (7*ct+B)/14;
    ci = ct-cv;
    if(ci>0 && ci+cv == ct)    return ci;
}

inline int costo(int w){

    if(w<100) return 2*w;

    if(w<10000) return 200+3*(w-100);

    if(w<1000000) return 29900+5*(w-10000);

    return 4979900+7*(w-1000000);

}

int main(){

    int A, B;

    cin>>A>>B;

    while(A){

        cout<<costo(costo(A,B))<<endl;

    cin>>A>>B;

    }
return 0;

}