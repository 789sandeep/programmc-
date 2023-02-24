// Q1 - Given a number n, print the following pattern without using any loop.
// n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n
// There should be 0 or at most one occurrence of negative number in the series.
// Sample Input: n = 16
// Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16
#include<iostream>
using namespace std;
void f(int n,int m, bool flag){
    cout<<m<<" ";
if(flag==false and n==m){
     return;
}
if(flag){
        if(m-5>0){
            return f(n,m-5,true);
        }
        else{
            return f(n,m-5,false);
        }
}
else{
    return f(n,m+5,false);
}
}
int main(){
    int n=16;
    f(n,n,true);
}