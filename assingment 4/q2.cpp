#include<iostream>
using namespace std;
int main(){
   int a=100;
   int b=500;
   int arm=0;
   while(b<=a){
     int ans=b%10;
        arm= ans*ans*ans;
        b/=10;
   }
   if(arm==b){
    cout<<"armstrong number"<<arm;
   }
   else{
    cout<<"not armstrong number:"<<arm;
   }
return 0;
}