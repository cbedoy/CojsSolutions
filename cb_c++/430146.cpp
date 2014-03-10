#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int n;
    while(true){
        cin>>n;
        if(n==0)break;
        int vec[n];
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        vector<int> v (vec, vec+n);
        sort(v.begin(), v.end());
        int valores[n];
        copy(v.begin(), v.end(), valores);
        if(n%2==0){
            printf("%.1f\n",((double)(valores[n/2]+valores[(n/2)-1])/2));
        }else{
            printf("%.1f\n", (double)valores[n/2]);
        }
    }
}