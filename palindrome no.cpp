#include<iostream>
using namespace std;
int main(){
    int num,rev=0,digit;
    cout<<"enter the number-";
    cin>>num;
    int temp=num;
    while(num>0){
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    cout<<rev<<endl;
    if(temp == rev){
        cout<<"it is a palindrome number";
    }
    else{
        cout<<"it is not a palindrome number";
    }

}