#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem=0,digit,count=0,count1=0;
    cin>>num;
    int result=num*num;
    cout<<result<<endl;
    string strnum=to_string(num);
    int length=strnum.length();

    string strres=to_string(result);
    int length1=strres.length();
    string part=strres.substr(length1-length, length1);
    
    if(strnum==part){
        cout<<"it is a automorphic number";
    }
    else{
        cout<<"it is not a automorphic number";
    }

}