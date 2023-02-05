#include<iostream>
using namespace std;
int main(){
    // int a[]={1,2,3,4,5};
     int a[]={1,1,1,1,1,1};
     int size=sizeof(a)/sizeof(a[0]);
    for(int i=size-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    
return 0;
}