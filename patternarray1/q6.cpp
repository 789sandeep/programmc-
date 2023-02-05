// Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
// that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
// given by the user.
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int x=13;
    int ans=0;
    int arr[]={1,4,-1,5,6,7,2};
    int i=0;
    int j=i+1;
    int k=n-1;
    while(i<k)
    {
        if(arr[i]+arr[j]+arr[k]==x){
            ans++;
            i++;
            k--;
        }
        else if(arr[i]+arr[j]+arr[k]<x){
            i++;
        }
        else {
            j++;
        }
    }
cout<<ans;
}