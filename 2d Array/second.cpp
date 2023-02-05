#include<iostream>
using namespace std;
int main(){
    int n=3; 
    int m=3;
    int a[n][m]={{1,2,3},{4,5,6},{7,8,9}};
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int t[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            t[i][j]=a[j][i];
        }
    }
for(int i=0; i<m; i++){
    for(int j=0; j<n/2; j++){
        swap(t[i][j],t[i][n-j-1]);
    }
}


for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
}