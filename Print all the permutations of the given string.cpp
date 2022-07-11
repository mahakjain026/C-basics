#include <bits/stdc++.h>
#include <string>
#include<iostream>
using namespace std;

void permute(string s , string answer)
{
	if(s.length() == 0)
	{
		cout<<answer<<" ";
		return;
	}
	for(int i=0 ; i<s.length() ; i++)
	{
		char ch = s[i];
        // cout<<"ch -"<<ch<<endl;
		string left_substr = s.substr(0,i);
        // cout<<"left_substr - "<<left_substr<<endl;
		string right_substr = s.substr(i+1);
        // cout<<"right_substr - "<<right_substr<<endl;
		string rest = left_substr + right_substr;
        // cout<<"rest - "<<rest<<endl;
		 permute(rest , answer+ch);
	}

}

int main()
{
	string s;
	string answer="";

	cout<<"Enter the string : ";
	cin>>s;

	cout<<"\nAll possible strings are : ";
	 permute(s , answer);
	return 0;
}
