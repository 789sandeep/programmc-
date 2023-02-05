// Given a 2D matrix with m rows and n columns containing integers, find and print the
// maximum value present in the array.
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int m=3;
    int a[n] [m]={{1,2,3},{4,5,6},{7,8,9}};
    int val=INT8_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(a[i][j]>val){
            val=a[i][j];
           }
        }
    }
    cout<<val;
    return 0;
}