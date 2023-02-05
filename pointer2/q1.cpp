// Q1 -Write a program to print the kth element of an array using pointers.
// The first line of the input contains the size of the array and the value of k.
// The second line of input contains the elements of the array. You can assume that 0 <= k < size
// of the array.
#include<iostream>
using namespace std;
int main(){
      int n,k;
      cin>>n>>k; //5 //2
      int a[n];
      for(int i=0; i<n; i++){
        cin>>a[i];// 1 2 3 4 5
      }
      int *ptra=(a+k-1);
      cout<<*ptra;//2
    return 0;
}