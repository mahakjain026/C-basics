#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the binary digit - ";
    cin>>s;
    int len=s.length();
    int i;
    for(i=len-1;i>=0;i--){
        if(s[i]=='1'){
            break;
        }    
    }
    for(int k=i-1;k>=0;k--){
        if(s[k]=='1'){
                s[k]='0';
            }
            else{
                s[k]='1';
            }
        }
    cout<<s;
}