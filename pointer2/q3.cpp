// Q2 - Write a program to find the sum of all the elements of an array. Use pointers to traverse
// the array. The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int *ptra=a;
    for(int i=0; i<n; i++){
        cin>>*ptra;
        ptra++;
    }
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}