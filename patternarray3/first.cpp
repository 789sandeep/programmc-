#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size=5;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans=0;
    for(int i=1; i<size; i++){
         ans=array[i]+array[i-1];
    }
     int ans1=array[b]-array[a-1];
   cout<<ans;  
   cout<<ans1; 
}