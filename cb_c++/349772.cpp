#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    int v[10];
    bool ord[n];
    int k=0, aux=n;
    while(n--){
         ord[k] = false;
         for(int i=0; i<10; i++)
            cin>>v[i];
        
         for(int i=0; i<9; i++){
             if(v[i]>=v[i+1])    
                 ord[k]=true;
             else{ 
                  for(int j=0; j<9; j++){
                          if(v[j]<=v[j+1]){
                                ord[k]=true;          
                          }else{
                             j=10;
                             ord[k]=false; 
                          }
                  }
                  
                  i=10;
             }
         }
         k++;
            
              
            
    }
    cout<<"Lumberjacks:"<<endl;
    for(int i=0; i<aux; i++)
        if(ord[i]==true)
            cout<<"Ordered"<<endl;
         else 
            cout<<"Unordered"<<endl;    
    return 0;
    }
