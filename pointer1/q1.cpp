// Q1 - Write a program to print the address of an integer variable whose value is input by the user.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int *ptr=&x;
    cout<<ptr;
}