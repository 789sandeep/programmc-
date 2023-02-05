// 9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a/2;
    bool is_prime=true;
    if(a==0 || a==1 ){
        is_prime=false;
    }
    for(int i=2; i<=b; i++){
        if(a%i==0){
            is_prime=false;
        }
    }
    if(is_prime==true){
        cout<<"this is prime number:";
    }
    else{
        cout<<"this is not prime number";
    }
    return 0;
}