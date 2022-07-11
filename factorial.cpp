#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int num;
    cin>>num;
    int result=factorial(num);
    cout<<result;
}

 int factorial(int num){
    if(num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}