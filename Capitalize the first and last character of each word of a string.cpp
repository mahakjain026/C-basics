#include<iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int length=s.length();
    for(int i=0;i<length;i++){
    if(i==0 || i == length-1){
        s[i]=toupper(s[i]);
    }
    if(s[i]==' '){
        s[i-1]=toupper(s[i-1]);
        s[i+1]=toupper(s[i+1]);
    }
    }
    cout<<s;

}