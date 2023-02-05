#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int col = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 1 && i == 1)
            {
                cout << " ";
            }
            else if (j == 2 && i == i)
            {
                cout << " ";
            }
            else if (j == 3 && i == 1)
            {
                cout << " ";
            }
            else
            {
                cout <<"*";
            }
        }
        cout << endl;
    }
}