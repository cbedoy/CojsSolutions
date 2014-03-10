#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string cad;
    cin>>cad;
    sort(cad.begin(), cad.end());
    cout<<cad<<endl;
    return 0;

}