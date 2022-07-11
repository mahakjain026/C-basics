#include<iostream>
using namespace std;
int main(){
    int n , m,length=0,count;
    cout<<"enter the size of matrix : ";
    cin>>n>>m;
    int arr[n][m];
    int a[n];
    cout<<"enter the elements of a matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        count=1;
        for(int j=1;j<m;j++){
            for(int k=0;k<m;k++){
                if(arr[0][i]==arr[j][k]){
                    length++;
                    count++;
                    break;
                }
            }
        }
        if(count==n){
            a[length]=arr[0][i];
            cout<<a[length]<<" ";

        }
    }
 }


	
	
	
