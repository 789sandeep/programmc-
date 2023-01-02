// Q1 - Write a program to check whether two numbers (entered by user) are equal or not.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(a && b){
        cout<<"Both are eequal number";
    }
    else{
        cout<<"Both are not equal"<<endl;
    }
    return 0;
}