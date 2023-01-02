// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include <iostream>
using namespace std;
int main(){
    int a=12345;
    int sum=0;
    while(a>0){
        sum=a%10;
        a/=10;
    }
    cout<<sum+4<<endl;
    return 0;
}