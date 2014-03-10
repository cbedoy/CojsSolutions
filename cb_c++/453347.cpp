#include <iostream>

using namespace std;

int F(int N, int K){
    if(N==1)
	return K;
    if( N == 2 )
         return K * K - 1;
      int ant = K;
      int act = K * K - 1;
      int temp;
      for( int i = 3; i <= N; i ++ ){
         temp = ( K - 1 ) * ( ant + act );
         ant = act;
         act = temp;
      }
      return act;
}

int main(){
	int n, k;
	cin>>n>>k;
	cout<<((k-1)*F(n-1, k))<<endl;	
	return 0;
}