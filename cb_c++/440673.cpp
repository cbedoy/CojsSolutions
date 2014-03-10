#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;int main(){int t;cin >> t;while ( t-- ){string B;cin >> B;int four = count( B.begin(), B.end(), '4' );int seven = count( B.begin(), B.end(), '7' );if ( four+seven == 0 ) cout << -1 << endl;else cout << (four>=seven ? 4 : 7) << endl;}}