#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    unsigned long A, B;
    cin>>A;
    cin>>B;
    cout<<(A+B) + (A-B) + (B+A) + (B-A);
    return 0;
}
