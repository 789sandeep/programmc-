#include<iostream>
using namespace std;
void checkVoteForEligible(int person){
              if(person>=19){
                cout<<"yes";
              }
              if(person<=17){
                cout<<"no";
              }
 return ;
}
int main(){
    int user;
    cout<<"enter the age:";
    cin>>user;
    checkVoteForEligible(user);
    return 0;
}