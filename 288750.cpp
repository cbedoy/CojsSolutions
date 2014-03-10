#include<iostream>
#include <cstdlib>
using namespace std;


int insertionSort(int arr[], int length);


int main (){
    int n, i, j, k, val;
    cin>>n;
    int salidas[n];
    for(i=0; i<n; i++){
        cin>>val;
        int vector[val];
        for(j=0; j<val; j++){
                 cin>>vector[j];                  
        }
        salidas[i]=insertionSort(vector, val);
                 
    }
    for(i=0; i<n; i++)
             cout<<"Optimal train swapping takes "<<salidas[i]<<" swaps.\n";
    return 0;
}


int insertionSort(int arr[], int length) {
      int i, j, tmp, int_x=0;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
                  int_x++;
                  
            }
      }
      return int_x;
}