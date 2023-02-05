#include<iostream>
#include<vector>
using namespace std;
int addInarray(vector<int>&v, int x,int n){
    int ans=0;
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(v[i]+v[j]==x){
            ans++;
            j--;
            i++;
         }
         else if(v[i]+v[j]>x){
            j--;
         }
         else{
            i++;
         }
    }
    return ans;
}
int main(){
    int n=5;
    // cin>>n;
    int x=6;
    vector<int> v;//[3 1 3 5 3] x=6
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int ans=addInarray(v,x,n);
    cout<<ans;
}