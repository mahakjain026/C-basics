#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    cout<<"number is - "<<num<<endl;
    for(int i=1;i<num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    
}