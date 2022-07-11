#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of row and column of matrix : ";
    cin>>n>>m;
    int arr[m][n];
    cout<<"enter the value of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }

    int maxcount=0,index=-1;

    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>maxcount){
                maxcount=count;
                index=i;
            }
    }
    cout<<"row with the maximum no. of 1's in a matrix is "<<index;
    
}