// Q2 - Write a program to find the product of 2 numbers using pointers
#include<iostream>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
    int *ptra=&a;
    int *ptrb=&b;
    int ans;
    int *ptr_ans=&ans;
    *ptr_ans=*ptra * *ptrb;
    cout<<ans<<endl;
    cout<<*ptr_ans;
}