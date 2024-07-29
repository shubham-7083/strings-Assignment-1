#include<iostream>
using namespace std;

bool palindrome(string s){
   int n=s.size();
   int i=0;
   int j=n-1;
   while(j>i){
        if(s[i]==s[j]);
        else return false;
        i++;j--;
   }  
   return true;
}

int main(){
    string s;
    cout<<"Enter your string:";
    cin>>s;
  
  /* string k=s;
   int n=s.size();
   int i=0;
   int j=n-1;
   while(j>i){
        char temp=k[i];
        k[i]=k[j];
        k[j]=temp;
        i++;j--;
   }
   cout<<k<<endl;
   if (s==k) cout<<"palindrome";
   else cout<<"Not palindrome";*/

   cout<<palindrome(s)<<endl;
    
}