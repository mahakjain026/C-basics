#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int deposit(int amount){
    int d;
    cout<<"enter the amount you want to deposit = ";
    cin>>d;
    cout<<"your total amount is = "<<amount+d;
}

int withdrawl(int amount){
    int w;
    cout<<"enter the amount you want to withdrawl = ";
    cin>>w;
    if(w<amount){
    cout<<"your total amount is = "<<amount-w;
    }
    else{
        cout<<"insufficient amount";
    }
}

int interest(float amount){
    float p,t;
    cout<<"enter the principle and time = ";
    cin>>p>>t;
    int r=3;

    float i=(1+r/100.0);
    float in=pow(i,t);
    float interest= p * in;
    cout<<"total interest is = "<<interest;
}

int main(){
    float amount;
    int n;
    cout<<"enter the amount in your account = ";
    cin>>amount;
    cout<<"enter what you want to do : "<<endl<<"1 : deposit"<<endl<<"2 : withdrawl"<<endl<<"3:interest"<<endl;
    cin>>n;
    switch(n){
        case 1:
        deposit(amount);
        break;

        case 2:
        withdrawl(amount);
        break;

        case 3:
        interest(amount);
        break;

        default:
        cout<<"invalid information";
        break;
    }
}