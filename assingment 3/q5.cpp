// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.
#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"enter the first number:"<<endl;
    cin>>num1;
    int num2;
    cout<<"enter the second number:"<<endl;
    cin>>num2;
    char op;
    cout<<"enter the operator:"<<endl;
    cin>>op;
   
    switch(op) {
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1+num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        default: 
                printf("ERROR: Unsupported Operation");
    }
    return 0;

}
