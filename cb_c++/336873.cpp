#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>
using namespace std;
string palabra;
string nuevo;
int main(){
    map<char, char> mapa;
    mapa['B'] = 'V'; mapa['L'] = 'K'; mapa['W'] = 'Q'; mapa['8'] = '7'; mapa[','] = 'M';
    mapa['C'] = 'X'; mapa['M'] = 'N'; mapa['X'] = 'Z'; mapa['9'] = '8'; mapa['.'] = ',';
    mapa['D'] = 'S'; mapa['N'] = 'B'; mapa['Y'] = 'T'; mapa['0'] = '9'; mapa['/'] = '.';
    mapa['E'] = 'W'; mapa['O'] = 'I'; mapa['1'] = '`'; mapa['-'] = '0'; mapa[' '] = ' ';
    mapa['F'] = 'D'; mapa['P'] = 'O'; mapa['2'] = '1'; mapa['='] = '-';
    mapa['G'] = 'F'; mapa['R'] = 'E'; mapa['3'] = '2'; mapa['['] = 'P'; 
    mapa['H'] = 'G'; mapa['S'] = 'A'; mapa['4'] = '3'; mapa[']'] = '[';
    mapa['I'] = 'U'; mapa['T'] = 'R'; mapa['5'] = '4'; mapa['\\'] = ']';
    mapa['J'] = 'H'; mapa['U'] = 'Y'; mapa['6'] = '5'; mapa[';'] = 'L';
    mapa['K'] = 'J'; mapa['V'] = 'C'; mapa['7'] = '6'; mapa['\''] = ';';
    while(getline(cin , palabra)){ 
        int len = palabra.size();
        nuevo = "";
        for(int i = 0; i < len; i++){
            nuevo += mapa[palabra[i]];
        }
        cout << nuevo << endl;
    }
    return 0;
}
