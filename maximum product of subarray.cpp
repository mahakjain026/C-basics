#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current_product = 1;
    int maximum_product=-1e9;
    int left=0;
    int right=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            current_product=1;
            for(int k=i;k<=j;k++){
                current_product*=arr[k];
            }

            if(maximum_product < current_product){
                maximum_product=current_product;
                left=i;
                right=j;

            }
        }
    }
    cout<<"maximum product of subarray is : "<<maximum_product<<endl;

    for(k=left;k<=right;k++){
	cout<<arr[k]<<" ";

}
}