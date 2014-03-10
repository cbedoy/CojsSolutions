#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
    int a, b, c, i=1;
    while(cin>>a>>b>>c){
                        
        if(a+b == c)
            printf("Case %d: %d+%d=%d\n", i, a, b, c);
        else if(a == b+c)
            printf("Case %d: %d=%d+%d\n", i, a, b, c);
        else if(a*b == c)
            printf("Case %d: %d*%d=%d\n", i, a, b, c); 
        else if(a == b*c)
            printf("Case %d: %d=%d*%d\n", i, a, b, c);
        else if(a-b == c)
            printf("Case %d: %d-%d=%d\n", i, a, b, c);
        else if(a==b-c)
            printf("Case %d: %d=%d-%d\n", i, a, b, c);
        else if(a/b == c)
            printf("Case %d: %d/%d=%d\n", i, a, b, c);
        else if(a == b/c)
             printf("Case %d: %d=%d/%d\n", i, a, b, c);  
        i++;           
    }
    return 0;   
}
