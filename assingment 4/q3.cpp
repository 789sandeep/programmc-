// Q3 - Write a program to find the sum of n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0;
    int i=0;
    while(a>=i){
        ans+=i;
        i++;
    } 
    cout<<ans;
}