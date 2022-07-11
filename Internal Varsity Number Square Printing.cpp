#include<iostream>
using namespace std;
int main(){
     int n,count=0;
     cin>>n;
     for(int i=n;i>0;i--){
        count+=i;
     }
     for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                cout<<count;
                count--; 
            }
            cout<<endl;
     }
}