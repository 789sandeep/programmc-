// Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
// both the conditions 'a < 50' and 'a < b' are true.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(a < 50){
        cout<<"a is less then 50";
    }
    else if(a<b){
        cout<<"a is less then b:";
    }
    else{
        cout<<"Both are not equal"<<endl;
    }
    return 0;
}