// Q4 - Implement the swap function using pointers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *ptra=&a;
    int *ptrb=&b;
    int c;
    int *ptrc=&c;
    *ptrc=*ptra;
    *ptra=*ptrb;
    *ptrb=*ptrc;
    cout<<*ptra<<" ";
    cout<<*ptrb;
}