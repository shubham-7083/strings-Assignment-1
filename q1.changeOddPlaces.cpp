#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of string:";
    cin>>n;
    char str[n];
    cout<<"Enter elements in array:"<<endl;

    for(int i=0;i<n;i++){
       cin>>str[i];
    }
    for(int i=0;i<n;i++){
       if(i%2!=0) str[i]='#';
    }
    cout<<str;
}