// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x.
#include <iostream>
#include <vector>
using namespace std;
int addpairInarray(vector<int> v, int x,int n)
{  
    int i = 0;
    int j = n - 1; // 3
    bool check=false;
    while (i <= j)
    {
        if (v[i] + v[j] == x)
        {
            check=true;
            break;
        }
        else if (v[i] + v[j] < x)
        {
            i++;
        }
        else if (v[i] + v[j] > x)
        {
            j--;
        }
    }
    if(check==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}
int main()
{
    int n = 4;
    vector<int> v;
    int x = 9;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele); //-1 0 1 2 3
    }
 addpairInarray(v, x,n);
    
}