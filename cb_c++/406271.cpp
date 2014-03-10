#include <iostream>
#include <string>
using namespace std;int main(){string linea;cin>>linea;int val=0;for(int i=0;i<linea.length();i++){if(linea[i]>='A' && linea[i]<='C')val+=2;else if(linea[i]>='D' && linea[i]<='F')val+=3;else if(linea[i]>='G' && linea[i]<='I')val +=4;else if(linea[i]>='J' && linea[i]<='L')val +=5;else if(linea[i]>='M' && linea[i]<='O')val +=6;else if(linea[i]>='P' && linea[i]<='S')val+=7;else if(linea[i]>='T' && linea[i]<='V')val+=8;else if(linea[i]>='W' && linea[i]<='Z')val+=9;}cout<<val+linea.length()<<endl;return 0;}

