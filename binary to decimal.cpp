#include<iostream>
#include <cmath>
using namespace std;
int main(){
int num,rem,dec=0;
cin>>num;
int i=0;
 while(num!=0){
        rem=(num%10);
        num=num/10;
        dec+=rem*pow(2,i);
        i++;
    }
    cout<<dec;

}