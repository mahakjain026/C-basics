#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Enter the value of a & b :";
    cin>>a>>b;
    cout<<"enter the operation : + , - , * , /"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<a<<" + "<<b <<"="<<a+b<<endl;
        break;
        case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;
        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
        case '/':
        cout<<a<<"/"<<b<<" = "<<a/b<<endl;
        break;
        default :
        cout<<"Please choose the valid choice"<<endl;
        
    }
}