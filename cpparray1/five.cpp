#include<iostream>
using namespace std;
int main(){
//   int a[]={3,0,1};
int a[]={8,6,4,2,3,5,0,1};
int size=sizeof(a)/sizeof(a[0]);
  int sum=0;
  for(int i=0; i<size; i++){
     sum+=a[i];
    }
    int range_sum=size*(size+1)/2;
    int missing=range_sum-sum;
    cout<<missing;
  }
