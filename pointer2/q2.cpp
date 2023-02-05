// Q2 - Write a program to find the sum of all the elements of an array. Use pointers to traverse
// the array. The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];//4
    for(int i=0;i<n; i++){
        cin>>a[i];//1 2 3 4
    }
    int ans=0;
    int *ptra=&ans;
    for(int i=0; i<n; i++){
        *ptra=*ptra+a[i];
    }
    cout<<*ptra<<endl;
    cout<<ans<<endl;
    return 0;
}