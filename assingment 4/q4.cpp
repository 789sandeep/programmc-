// Q4 - Write a program to reverse a given integer number.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0;
    int i=0;
    while(a>0){
        int ram=a%10;
        ans=ans*10+ram;
        a/=10;
    } 
    cout<<ans;
}