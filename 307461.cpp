#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if (n==0){  cout<<"10"; return 0; }
    if (n==1){  cout<<"1"; return 0; }
    int *a = new int[14];
    for(int i = 0;i<14;i++){ a[i] = 0; }
    int counter  = 13;
    while(n>1){
        for(int j = 9;j>=0; j--){
            if (j==1){
                    cout<<"-1"; return 0;
                }
            if (n%j==0){
                a[counter] = j;  counter--; n/=j;
                break;
            }
        }
    }
    for(int i = counter+1 ;i<14;i++){
        cout<<a[i];
    }
    return 0;
}
