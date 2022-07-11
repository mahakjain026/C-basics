#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of the matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"enter the value of matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }

    cout<<"matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int a[n*n];
    int l=0;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[l++]=arr[i][j];
        }
    }

    for (int k=0;k<n*n;k++){
            cout<<a[k]<<" ";
    }
    cout<<endl<<"sorted array is : ";
    for (int i=0;i<n*n;i++){
        for(int j=i+1;j<n*n;j++){
        if(a[i]>a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
    for(int i=0;i<n*n;i++){
        cout<<a[i]<<" ";
    }
    int k;
    cout<<endl<<"enter the value of kth position : ";
    cin>>k;
    for(int i=0;i<n*n;i++){
        if(i+1==k){
            cout<<"element is : "<<a[i];
        }
    }
}