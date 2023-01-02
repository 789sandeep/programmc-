// Q5 - Write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;
int main(){
    int a=123;
    int sum=0;
    while(a>0){
        sum+=a%10;
        a/=10;
    }
    cout<<sum<<endl;
    return 0;
}