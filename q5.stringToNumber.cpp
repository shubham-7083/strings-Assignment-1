#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a number in string:";
    cin>>s;
    int n=s.size();
    
    int num=0;
    for(int i=0;i<n;i++){
       num=num*10+((int)s[i]-48);
    }
    cout<<num;
}