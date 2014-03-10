using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>

#define LLU long long unsigned int
#define LLD long long double

int N,deduct,val;
bool IsLess(int a){
    if(a>=N) return true;
    return false;
}
int main(){
    vector<int> Diag;
    LLU cnt=1;
    Diag.push_back(0);
    while(Diag.back()<10000000)    {
        Diag.push_back(Diag.back()+cnt);
        cnt++;
    }
    vector<int>::iterator it;
    int t;
    cin>>t;
    while(t--){
    cin>>N;
        it=find_if(Diag.begin(),Diag.end(),IsLess);
        val=it-Diag.begin();
        deduct=Diag[val]-N;
        if(val%2)
        printf("TERM %d IS %d/%d\n",N,1+deduct,val-deduct);
        else
        printf("TERM %d IS %d/%d\n",N,val-deduct,1+deduct);
    }
}
