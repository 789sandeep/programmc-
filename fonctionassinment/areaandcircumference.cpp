#include<iostream>
using namespace std;
float circumferenceCicle(int &r){
            float area=3.14 * (r*r);
            float circle= 2 * 3.14 * r;
            cout<<"circumference of the cicle:"<<circle<<endl; //2*pai*r
            cout<<"area of cicle:"<<area; //2*pai*r
}
int main(){
    int redius=3;
    circumferenceCicle(redius);
}