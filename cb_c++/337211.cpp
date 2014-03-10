#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
#define all(i) (i).begin(), (i).end()
int main(){string cad1,cad2;int i,j;while(cin>>cad1>>cad2){sort(all(cad1));sort(all(cad2));i=0;j=0;while(cad1[i]!='\0' && cad2[j]!='\0'){if(cad1[i]>cad2[j]){j++;}else if(cad1[i]<cad2[j]){i++;}else if(cad1[i]==cad2[j]){printf("%c",cad2[j]);i++;j++;}}printf("\n");}return 0;}
