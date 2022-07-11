#include<iostream>
#include<fstream>
using namespace std;

string letterappendix(string str){
    int n = sizeof(str)/sizeof(str[0]); 
    
    int visited[n];

    for(int i = 0; str[i] != '\0'; i++){

        if(visited[i] != 1){
           int count = 1;
           for(int j = i + 1; j < n; j++){
              if(str[i] == str[j]){
                 count++;
                 visited[j] = 1;
              }
            }

            cout << str[i] << " : " << count << endl;
         }
     }

}

string wordappendix(string str){
    // string new;
    // for(int i=0;i<str.length;i++){
    //     if(str[i]==' '){
    //         new[i]=str.substr(i-1)
    //     }
    // }

}

int main(){
    ifstream file;
    file.open("/home/mahak/Documents/projects/css/basics of cpp/appendix.txt");
    string str;
    getline(file,str);
    cout<<str<<endl;

    int choice;
    cout<<"choose whose appendix u want to find out"<<endl<<"1 = letter"<<endl<<"2 = word"<<endl;
    cin>>choice;

     switch(choice){
        case 1:
        letterappendix(str);
        break;

        case 2:
        wordappendix(str);
     }

}