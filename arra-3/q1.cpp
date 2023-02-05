#include<iostream>
using namespace std;
int main(){
    cout<<"enter start position:"<<endl;
    int l ,r;
    cin>>l;
    cout<<"enter end destination:"<<endl;
    cin>>r;
    int user;
    cout<<"enter array size:";
    cin>>user;
    int arr[user];
    for(int i=0; i<user; i++){
        cin>>arr[i];
    }
    for(int i=0; i<user; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=l; i<=r; i++){
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}