// Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
#include<vector>
using namespace std;
int oddEven(vector<int>v){
    int ev=0;
    int od=0;
    for(int i=0; i<v.size();i++){
        if(v[i]%2==0){
            ev+=1;
            cout<<"this is even n:"<<v[i]<<endl;
        }
        else{
            od+=1;
            cout<<"this is odd n:"<<v[i]<<endl;      
        }
       
    }
    cout<<"count even:"<<ev<<endl;;
    cout<<"count odd:"<<od;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }
    oddEven(v);
return 0;
}