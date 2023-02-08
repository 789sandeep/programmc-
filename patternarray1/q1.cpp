// Online C++ compiler to run C++ program online
//Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.
#include <iostream>
using namespace std;
int main() {
  
    int m=5,n=4;
    int a1[]={1,2,4,5,7};
    int a2[]={0,14,13,23};
    int a[m+n];//1 2 3 
    int i=0;//
    int j=0;//3
    int k=0;//3
    while(i<m && j<n){
      if(a1[i]==a2[j]){
          a[k]=a1[i];
          i++;
          k++;
        }
        if(a1[i]<a2[j]){
            a[k]=a1[i];
            k++;
            i++;
        } 
        else{
            a[k]=a2[j];
            k++;
            j++;
        }
    }
  while(i<m){
     a[k]=a1[i];
     i++;
     k++;
  }
   while(j<n){
     a[k]=a2[j];
     j++;
     k++;
  }
      
    for(int i=0; i<m+n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
