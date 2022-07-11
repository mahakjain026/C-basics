#include<iostream>
using namespace std;

struct student{
    string studentName;
    int studentRollno;
    int studentAge;
};



void name(student s[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(s[i].studentName>s[j].studentName){
            struct student temp =s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        }
    }
   
}

void age(student s[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(s[i].studentAge>s[j].studentAge){
            struct student temp =s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        }
    }
    
}

void rollnumber(student s[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(s[i].studentRollno>s[j].studentRollno){
            struct student temp =s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        }
    }
    // return s;
}

int main(){
int n;
cout<<"enter the no. of student : ";
cin>>n;
student s[n];
for(int i=0;i<n;i++){
    cout<<"enter the name of student : ";
    cin>>s[i].studentName;
    cout<<"enter the roll number of student : ";
    cin>>s[i].studentRollno;
    cout<<"enter the value age : ";
    cin>>s[i].studentAge;
    }

    string choice;
    cout<<"enter the choice by which you want sorting : name , age , rollnumber => ";
    cin>>choice;
    if(choice=="name"){
        name(s , n );
    }
    else if(choice=="age"){
        age(s,n);
    }
    else if(choice == "rollnumber"){
        rollnumber(s,n);
    }
    else{
        cout<<"enter the correct choice ";
    }

    for(int i=0;i<n;i++){
        cout<<s[i].studentName<<" "<<s[i].studentAge<<" "<<s[i].studentRollno<<endl;
    }

}