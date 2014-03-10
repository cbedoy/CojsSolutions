#include <iostream>
#include <string>
#include <cmath>
using namespace std;int main(){int n;string cad="", salida="";cin>>n;while(n--){cin>>cad;int tam = (int)sqrt(cad.length());salida="";for (int j = tam-1; j >=0; j--) {for (int k=j; k <cad.length(); k+=tam) {salida += cad[k];}}cout<<salida<<endl;}return 0;}
