// Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    if (a>90 && a<100){
        cout<<"Grade A+";
    }
    else if (a>80 && a<90){
        cout<<"Grade A";
    }
    else if (a>70 && a<80){
        cout<<"Grade B+";
    }
    else if (a>60 && a<70){
        cout<<"Grade B";
    }
    else if (a>50 && a<60){
        cout<<"Grade C";
    }
    else if (a>40 && a<50){
        cout<<"Grade D";
    }
    else if (a>30 && a<40){
        cout<<"Grade E";
    }
    else if (a>0 && a<30){
        cout<<"Grade F";
    }
    return 0;
}
