#include<iostream>
using namespace std;

void merge(int arr[] , int s ,int mid,int e){
    int n1= mid - s + 1;
    int n2 = e - mid ;

    int p1[n1],p2[n2];

    for(int i=0;i<n1;i++){
        p1[i]=arr[s+i];
        
    }

    for(int j=0;j<n2;j++){
            p2[j]=arr[mid+1+j];
            
    }

    int i=0;
    int j=0;
    int k=s;

    while(i<n1 && j<n2){
        if(p1[i]<p2[j]){
            arr[k]=p1[i];
            i++;
        }
        else{
            arr[k]=p2[j];
            j++;
        }
        k++;
    }


    while(i<n1){
        arr[k]=p1[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=p2[j];
        j++;
        k++;
    }

}

int mergesort(int arr[] ,int s , int e){
    
    if(s<e){
        int mid=(s+e)/2;

    mergesort(arr , s , mid );
    mergesort(arr , mid+1 , e );
    merge(arr , s , mid , e);

    }

    return 0;
    
}


int main(){
    int n;
    cin>>n;

    int arr1[n],arr2[n];

    cout<<"enter the value of arr1 : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"enter the value of arr2 : ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    mergesort(arr1 ,0 ,n-1);
    cout<<"Array1"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    mergesort(arr2 ,0 ,n-1);

    
    cout<<endl<<"Array2"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int m=2*n;
    int new_arr[m],k=0,i=0,j=0;
    
        while(i<n && j<n){
            if(arr1[i]<arr2[j]){
                new_arr[k] = arr1[i];
                k++;
                i++;
            }

            else{
                new_arr[k]=arr2[j];
                j++;
                k++;
            }
        }

        while(i<n){
        new_arr[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n){
        new_arr[k]=arr2[j];
        j++;
        k++;
    }
    

    for(int i=0;i<m;i++){
        cout<<new_arr[i]<<" ";
    }


}

