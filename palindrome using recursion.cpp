#include<iostream>
using namespace std;

bool isPalindrome(string s, int left , int right){
    if(left>=right){
        return true;
    }

    if(s[right]!=s[left]){
        return false;
    }
    isPalindrome(s , left+1 , right-1);

}


int main(){
    string s;
    getline(cin,s);
    int len=s.length();
    
    if(isPalindrome(s , 0 , len-1 )){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome string";
    }

}