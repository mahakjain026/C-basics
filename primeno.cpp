#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n==0||n==1){
    cout<<"not a prime number";
   }

 int flag = 0;
   
   for(int i=2;i<n/2;i++){
    if(n%i == 0){
        flag=1;
    }
   }
   if(flag==0){
    cout<<"prime number";
   }
   else{
    cout<<"not a prime number";
   }
}