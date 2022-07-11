#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[n]; 

    cout<<"enter the value : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int search;
    cout<<"enter the value which you want to search : ";
    cin>>search;

    int s=0,e=n-1;
    

    for(int i=0;i<n;i++){
        int mid=(s+e)/2;
        if(arr[mid]==search){
            cout<<"position is : "<<mid;
            break;
        }
    else if(arr[mid]<search){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    }


}