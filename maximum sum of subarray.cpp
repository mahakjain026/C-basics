#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int a[n],i,j,k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int maximum_sum=0;
	int current_sum=0;
	int left=0;
	int right=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++)
		{
			current_sum=0;
			for(k=i;k<=j;k++){
				current_sum+=a[k];
			}
			if(current_sum>maximum_sum){
				maximum_sum=current_sum;
				left=i;
				right=j;
				}
		}
	}
	cout<<"maximum_sum is "<<maximum_sum<<endl;
	
for(k=left;k<=right;k++){
	cout<<a[k]<<" ";
}
return 0;
}