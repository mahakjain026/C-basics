#include<iostream>
using namespace std;
int main(){
    int num,temp;
    cout<<"enter the credit number = ";
    cin>>num;
    temp=num;
    string strnum=to_string(temp);
    int length=strnum.length();

    if(length<=16){
        cout<<"Invalid card number";
    }
    else{
        if(strnum[0]==0){
            cout<<"Invalid card number";
        }
    }
}