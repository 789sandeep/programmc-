#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i <= 5; i++)
    {

        int user;
        cin >> user;
        v.push_back(user);
    }
    int x;
    cout << "enter x:";
    cin >> x;
    int accurance = 0;
    // for (int i = 0; i < v.size(); i++)
    // {

    //     if (v[i] == x)
    //     {
    //         accurance = i;
    //     }
    // }
    // cout << accurance;
    // cout << endl;

    for (int ele : v)
    {
        if (ele == x)
        {
            accurance++;
        }
    }
    cout << accurance << endl;
    return 0;
}