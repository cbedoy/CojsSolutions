#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
struct concursantes{
    string nombre;
    int ra;
    float w;
    float we;
    int k;
    float resultado;
};
float formula(int ra, float w, float we, int k){
    return (float)(ra+k*(w-we));
}
int main(){
    string torneo;
    int n;
    cin>>torneo>>n;
    concursantes com[n];
    float suma=0;
    for(int i=0; i<n; i++){
        cin>>com[i].nombre>>com[i].ra>>com[i].w>>com[i].we>>com[i].k;
        com[i].resultado=formula(com[i].ra, com[i].w, com[i].we, com[i].k);
        suma+=com[i].ra;
    }
    cout<<"Tournament: "<<torneo<<endl;
    cout<<"Number of players: "<<n<<endl;
    cout<<"New ratings:"<<endl;
    for(int i=0; i<n; i++){
        cout<<com[i].nombre<<" "<<com[i].resultado<<endl;
    }
    printf("Media Elo: %.0f", (suma/n));
    return 0;
}