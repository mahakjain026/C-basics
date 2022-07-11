#include<iostream>
using namespace std;
int main(){
    string m,output="";
    cout<<"enter the string : ";
    getline(cin,m);
    //  cout<<m;
    for(int i=0;i<m.length() ; i++){
       m[i]=toupper(m[i]);      
    }

    string str[]={"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
    
    for(int i=0;i<m.length();i++){
        if(m[i]==' '){
            output=output + "0";
        }
        else{
            output=output+ str[m[i]-'A'];
        }
    }

    cout<<output;

}