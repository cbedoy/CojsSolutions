#include <iostream>     // std::cout
#include <algorithm>

using namespace std;
int main(){
    int n = 1500;
    int last2 = 0;
    int last3 = 0;
    int last5 = 0;
    long long result[n];
    result[0] = 1;
    for (int i = 1; i < n; ++i) {
        long long prev = result[i - 1];
        while (result[last2] * 2 <= prev) { ++last2;}
        while (result[last3] * 3 <= prev) { ++last3;}
        while (result[last5] * 5 <= prev) { ++last5;}
        long long candidate1 = result[last2] * 2;
        long long candidate2 = result[last3] * 3;
        long long candidate3 = result[last5] * 5;
        result[i] = min(candidate1, min(candidate2, candidate3));
        }
    int nn = 1;
    while(true){
        cin>>nn;
        if(nn==0) break;
        cout<<result[nn-1]<<endl;;                    
    }
}
