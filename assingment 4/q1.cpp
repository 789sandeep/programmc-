#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int fact=1;
    int i=1;
    while (i<=a){
        fact*=i;
        
        i++;
    }
   
    cout<<fact;
    return 0;
}