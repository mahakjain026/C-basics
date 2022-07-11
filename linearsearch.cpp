#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"length of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array : ";
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int find;
    cout<<"enter the value of find :";
    cin>>find;
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            cout<<"found at "<<i;
        }
    }
}