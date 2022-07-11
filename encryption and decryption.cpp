#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the word : ";
    getline(cin,s);
    int key;
    cout<<"enter the key = ";
    cin>>key;
    int choice;
    cout<<"choose 1 = encryption and 2 = decryption "<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        for(int i=0;i<s.length();i++){
            s[i]=s[i]+key;
        }
        cout<<"encrypted text is : "<<s;
        break;

        case 2:
        for(int i=0;i<s.length();i++){
            s[i]=s[i]-key;
        }
        cout<<"decrypted text is : "<<s;
        break;

        default:
        cout<<"Invalid choice";
        break;
    }
}