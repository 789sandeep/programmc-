#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          cin>>a[i][j];// 1 2 3 4 5 6 7 8 9
        }
    }
   int sum=0;
   int *ptra=&sum;//1+5+9
   for(int i=0; i<n; i++){
    sum+=*(*(a+i)+i);
   } 
   
   cout<<sum<<endl;
}