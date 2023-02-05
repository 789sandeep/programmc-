// Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101.
#include<iostream>
using namespace std;
int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int size1=sizeof(b)/sizeof(a[0]);
    int min=a[0];
    int min1=b[0];
    for(int i=1; i<size; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
     for(int i=1; i<size1; i++){
        if(a[i]<min){
            min=b[i];
        }
    }
cout<<min+min1;
}