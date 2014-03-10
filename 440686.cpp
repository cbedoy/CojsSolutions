#include <iostream>

#define P  1000000000
#define ll long long

using namespace std;

ll BigPow(ll a,ll b)
{
	ll BP;
	if(b==1)
		return a%P;
	else if(b%2==0)
	{
		BP=BigPow(a,b/2);
		return (BP%P)*(BP%P)%P;
	}
	
	else
		return (a*BigPow(a,b-1))%P;
}
main(){ll a,b,T,i;	cin >> T;for(i=1;i<=T;i++){cin >> a >> b;cout << BigPow(a,b) << endl;}}