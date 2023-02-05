#include <iostream>
using namespace std;
int main()
{
    int no_of_lines = 5;
    // for (int j = 1; j < no_of_lines-2; j++)
    // {
    //     int space = 3 - j + j - 1;
    //     for (int sp = 1; sp <= space; sp++)
    //     {
    //         cout << " ";
    //     }
    //     int fiv = 2 - j + j - 2 + 1;
    //     for (int top = 1; top <= fiv; top++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= no_of_lines; i++)
    // {
    //     cout << "*";
    // }
    // cout << endl;

    // for (int j = 1; j < no_of_lines-2; j++)
    // {
    //     int space = 3 - j + j - 1;
    //     for (int sp = 1; sp <= space; sp++)
    //     {
    //         cout << " ";
    //     }
    //     int fiv = 2 - j + j - 2 + 1;
    //     for (int top = 1; top <= fiv; top++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //DRY RUN
    //l1=4
    //col=4
    //_ _ * _ _
    //_ _ * _ _
    //* * * * *
    //_ _ * _ _
    //_ _ * _ _

    for(int l1=0; l1<no_of_lines; l1++){
        for(int col=0; col<no_of_lines; col++){
            if(col== no_of_lines/2){
                cout<<"*";
            }
            else if(l1==no_of_lines/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
      
    return 0;
}