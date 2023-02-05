#include <iostream>
using namespace std;
int main()
{
    int no_of_lines = 5;
    for (int i = 1; i <= no_of_lines; i++)
    {
        //  cout<<i<<endl;
        int space = no_of_lines - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        int no_of_words = 2 * i - 1;
        for (int k = 0; k < no_of_words; k++)
        {
            cout << (char)('A' + k);
        }
        cout << endl;
    }
    int no_of_lines_2 = 4;
    for (int l2 = 1; l2 <= no_of_lines_2; l2++)
    {
        int space = 1*l2;
        for (int j = 1; j <= space; j++)
        {
              cout<<" ";
        }
        int no_of_second_words = 7 - l2 + 1 - l2 + 1;
        for (int l = 0; l < no_of_second_words; l++)
        {
            cout << (char)('A' + l);
        }
        cout << endl;
    }
}
