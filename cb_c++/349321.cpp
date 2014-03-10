#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

typedef long long   LL;

string s1[] = {".*", "*.", "*.", "**", "**", "*.", "**", "**", "*.", ".*"};
string s2[] = {"**", "..", "*.", "..", ".*", ".*", "*.", "**", "**", "*."};

char ch[305];
char num[105];
char s[3][305];

int it;

void lee(int & n){
   it = n = 0;
   gets(ch);
   while(ch[it]) n = n*10 + ch[it++]-'0';
}

int main(){
   int n;
   lee(n);
   while(n){
      gets(ch);
      it = 0;
      if(ch[0] == 'S'){
         gets(num);
         for(int i=0; i<n ;i++){
            if(i) s[0][it] = ' ', s[1][it] = ' ', s[2][it++] = ' ';
            char numaux = num[i]-'0';
            s[0][it] = s1[ numaux ][0];
            s[1][it] = s2[ numaux ][0];
            s[2][it++] = '.';
            s[0][it] = s1[ numaux ][1];
            s[1][it] = s2[ numaux ][1];
            s[2][it++] = '.';
         }
         s[0][it] = s[1][it] = s[2][it] = 0;
         puts(s[0]);
         puts(s[1]);
         puts(s[2]);
      }
      else{
         for(int i=0; i<3 ;i++)
            gets(s[i]);
         for(int i=0; i<n ;i++){
            int it1 = i*3, j;
            for(j=0; j<10 ;j++){
               if(s[0][it1] == s1[j][0]) if(s[0][it1+1] == s1[j][1])
                  if(s[1][it1] == s2[j][0]) if(s[1][it1+1] == s2[j][1])
                     break;
            }
            num[it++] = j+'0';
         }
         num[it] = 0;
         puts(num);
      }
      lee(n);
   }
}
