// Q5 - Write a function that returns the first character, last character and the number of
// occurrences of ‘t’ in a string input by user.
#include<iostream>
using namespace std;
int first_last(string a, char *first, char *last){
 *first=a[0];
 *last=a[a.size()-1];
 int cnt=0;
 for(auto &ch:a){
    if(ch=='t'){
      cnt++;
    }
  }
return cnt;
}
int main(){
    string a="twitter";
    char first,last;
    int  ans=first_last(a,&first,&last);
    cout<<ans<<endl;
    cout<<first<<" "<<last;

}