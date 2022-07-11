#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[1000];
    ifstream myfile;
    myfile.open("/home/mahak/Documents/projects/css/basics of cpp/camelcase.txt");
    string m;
    if(!myfile){
        cout<<"No such file exist";
    }
    else{
        int ind=0,count=0;
        while(getline(myfile,m)){
            for(int i=0;i<m.length();i++){
                if (m[i] == ' ')
                { 
                    count++;
                    m[i + 1] = toupper(m[i + 1]);
                    continue;
                }
                else
                {
                    m[ind++] = m[i];
                }
            }
            m[0] = tolower(m[0]);
            for(int i=0;i<m.length()-count;i++)
            cout << m[i];
                
            }
        }
        
    }
