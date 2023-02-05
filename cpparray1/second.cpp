// - Given an integer array and its size, find the sum of the greatest and the smallest integer present
// in the array. Here 1< size <101
#include<iostream>
using namespace std;
int main(){
    int a[]={3,5,7,4,6};
    int size=sizeof(a)/sizeof(a[0]); //5
    int min,max;
    min=a[0];//1
    max=a[0];//1
    ///i=1
    for(int i=1; i<size; i++){
        if(a[i]>max){
            max=a[i];//
        }
        if(a[i]<min){
            min=a[i];
        }
    }
cout<<max+min;
}



