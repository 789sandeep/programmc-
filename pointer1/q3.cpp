// Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
// The main function should call this function to get the largest and smallest number and print
// the output.
#include<iostream>
using namespace std;
int LargeValue(int a, int b , int c) 
{
    int *ptra=&a;
    int *ptrb=&b;
    int *ptrc=&c;
    if(*ptrb<*ptrc && *ptrb > *ptra){
        return *ptrc;
    }
}
int small(int a, int b , int c) 
{
    int *ptra=&a;
    int *ptrb=&b;
    int *ptrc=&c;
    if(*ptra<*ptrb && *ptra<*ptrc){
        return *ptra;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=LargeValue(a,b,c);
    int ans=small(a,b,c);
     cout<<ans1<<" ";
    cout<<ans;
}