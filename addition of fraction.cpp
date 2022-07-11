#include<iostream>
using namespace std;
int main(){
    int num1,den1,num2,den2;

    cout<<"enter the value of num1 , den1 , num2 , den2 = ";
    cin>>num1>>den1>>num2>>den2;

    int result1 = (num1*den2) + (den1*num2);
    int result2= ( den1 * den2 );

    int hcf=1;

   for(int i=1 ;i<=result1 || i<=result2 ;i++){
        if(result1%i==0 && result2%i==0){
            hcf=i;
        }
   } 

   result1/=hcf;
   result2/=hcf;

   cout<<"result is = "<<result1<<"/"<<result2;
}