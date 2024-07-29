#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter your string:";
    cin>>s;
   
    int n=s.size();
 
    if(n%2!=0) {
      cout<<"Length is not even:";
      return 0;
    }
    reverse(s.begin()+n/2,s.end());

    cout<<s; 
    
}