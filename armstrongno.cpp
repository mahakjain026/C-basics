#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
 int num,n=0,digit,rem=0,temp;
 cin>>num;
 temp=num;
 string strnum=to_string(num);
 int length=strnum.length();
 while(num!=0){
    digit=num%10;  
    num=num/10;
    n=n+pow(digit,length);   
 }
 if(n==temp){
    cout<<"It is a armstrong number";
 }
 else{
    cout<<"It is not a armstrong number";
 }
}