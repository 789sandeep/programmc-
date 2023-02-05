// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int difference(vector<int>&vec, int x,int n){
   int i=0;
   int j=n-1;
   bool check=false;
   while (i<j)
   {
       if(vec[j]-vec[i]==x){
        check=true;
        break;
       }
       else if(vec[j]-vec[i]<x){
        i++;
       }
       else{
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
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>vec;
    for(int i=0; i<n; i++){
          int ele;
          cin>>ele;
          vec.push_back(ele);
    }
   difference(vec,x,n);
}