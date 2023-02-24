#include <iostream>
using namespace std;
int rec(int n, int m){
    if(m==1) {
        return n*(n+1)/2;
    }
    return rec(rec(n,m-1),1);
}
int main()
{
    int n,m;
    cout<<"Enter the number n and m : ";
    cin>>n;
    cin>>m;
    cout<<rec(n,m);
}
 