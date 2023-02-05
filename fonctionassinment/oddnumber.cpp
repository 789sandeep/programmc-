#include <iostream>
using namespace std;
void oddNumber(int a, int b)
{   
    while (a <= b)
    {
       
        if (a % 2 != 0)
        {
            cout<<a<<" ";
        }
        a++;
        
    }
    
    return;
}
int main()
{
    int a = 1;
    int b = 10;
    oddNumber(a, b);
    return 0;
}