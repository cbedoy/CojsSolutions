#import <iostream>
#import <cstring>
using namespace std;

int main(){
    string l;
	cin>>l;
    int s=0;
	for(int i=0; i<l.length(); i++){
	    s+=(int)l[i]-64;
	}
    cout<<s<<endl;
	return 0;
}