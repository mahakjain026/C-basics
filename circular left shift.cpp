#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        if(i==0){
            arr1[n-1]=arr[i];
        }
        else{
            arr1[i-1]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
}