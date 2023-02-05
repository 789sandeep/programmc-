// - Write a program which takes the values of length and breadth from user and check if it is
// a square or not.
#include <iostream>
using namespace std;
int main(){
    int length;
    cin>>length;
    int breadth;
    cin>>breadth;
    if(length==4 && breadth==5){
        cout<<"it is a square";
    }
    else{
        cout<<"it is not square";
    }
    return 0;
}