#include <iostream>
#include <string>
using namespace std;
int array[8] = { 0 };
int main(void){
	int i, j, num, index, pn;
	cin >> num;
	for (i = 1; i <= num; ++i){
		cin >> pn; 	string seq; cin >> seq;
		for(j = 0; j < 8; j++){	array[j] = 0; }
		for (j = 0; j < 38; ++j){ index = ( seq[j]	 == 'H' ? 4 : 0 )+ ( seq[j+1] == 'H' ? 2 : 0 ) + ( seq[j+2] == 'H' ? 1 : 0 );
			array[index]++;
		}
		cout << i;
		for (unsigned index = 0; index < 8; ++index){ cout << " " << array[index]; }
		cout << endl;
	}
	return 0;
}