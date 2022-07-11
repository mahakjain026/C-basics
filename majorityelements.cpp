#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
                index=i;
            }
        }
    }
    if(maxcount>n/2){
        cout<<"majority element is-"<<arr[index]<<endl;
    }
    else{
        cout<<"no majority elements"<<endl;
    }
}