#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;
int main ()
{
	int num, ones, total;
	string line;
	total = 0;
	while(cin >> num, !cin.eof()){
		line = std::bitset<sizeof(num) * 8>(num).to_string();
		ones = count(line.begin(), line.end(), '1');
		if(ones % 2 == 0)  {
			++total;
		}
	}cout << total << endl;
}