// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.
#include <iostream>
using namespace std;
int main(){
    int cost_price;
    cin>>cost_price;
    int sell_price;
    cin>>sell_price;
    int profit=sell_price-cost_price;
    int loss=cost_price-sell_price;
    cout<<"profit:"<<profit<<endl;
    cout<<"loss:"<<loss<<endl;
    return 0;

}