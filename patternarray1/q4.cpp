// Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order. Where size of vector 1<size<101.
#include <iostream>
#include <vector>
using namespace std;
int squareInvector(vector<int> &v)
{   int i=0;
    int j=v.size()-1;
    vector<int> ans(v.size(), 0);
    vector<int>ans1(ans.size(),0);
    int ind=ans.size()-1;
    for (int i = 0; i < v.size(); i++)
    {
        ans[i] = v[i] * v[i];
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // cout<<endl;
    while(i<=j && ind>=0){
        if(abs(ans[i])>abs(ans[j])){
            ans1[ind]=v[i]*v[i];
            i++;
            ind--;
        }
       else{
         ans1[ind]=v[j]*v[j];
          j--;
          ind--;
       }
    }
   for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    squareInvector(v);
}
