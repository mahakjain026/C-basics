// maximum sum of subarray 
//approch 1 (time complexity = n^3)

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


//approch 2 (time complexity=n+n^2)
//maximum sum of sub array


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],i,j;
    int cumsum[1000]={0};
    int maximum_sum=0;
    int current_sum=0;
    int left=0;
    int right=0;
    cin>>a[0];

    cumsum[0]=a[0];
    for(i=1;i<n;i++){
        // precomputing
        cin>>a[i];

        cumsum[i] =cumsum[i-1] + a[i];

    }

    // generate all subarrays

    for(i=0;i<n;i++){

        for(j=i;j<n;j++)

        {

        current_sum=0;
        current_sum=cumsum[j]-cumsum[i-1];

        // update maximum  

        if(current_sum >maximum_sum){

            maximum_sum = current_sum;
            left=i;
            right=j;

        }
        }
        cout<<"maximum_sum is "<<maximum_sum<<endl;

       return 0;
    
	}

}
