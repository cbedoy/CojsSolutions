#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int array[1000][1000];
void sum(int n){
    int i=0;
    for(i=0; i<n; i++){
        array[n-1][i]+=max((array[n][i]),(array[n][i+1]));
    }
}
int main(){
  int i,j,n,test,l;
  scanf("%d",&test);
  while(test--){
        scanf("%d",&n);
        for(i=0; i<n; i++){
            for(j=0; j<i+1; j++){
                cin>>array[i][j];
            }
        }
        while(n--){
            sum(n);
        }
        printf("%d\n",array[0][0]);
  }
  return 0;
}