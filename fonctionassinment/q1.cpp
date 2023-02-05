// Write a function to print squares of the first 5 natural numbers.
#include<iostream>
using namespace std;
int squqre(int user){
        int sq=0;
        for(int i=1; i<=user; i++){
           
                 sq=i*i;
                 cout<<sq<<endl;
    
           
        }
     
        
      
}
int main(){
 
          int user;
          cout<<"enter the number first five natural number:";
          cin>>user;
          squqre(user);

}