#include<iostream>
using namespace std;
string camelcase(string s)
{
	int rl=0;
	int l=s.length();
	s[0]=toupper(s[0]);
	for(int i=0;i<l;i++)
	if(s[i]==' '){
	s[i+1]=toupper(s[i+1]);
	continue; 
	}
	return s;	
}
int main()
{
	string stl;
	getline(cin,stl);
	if(cin)
	cout<<endl<<camelcase(stl);
	else 
	cout<<endl<<"Invalid";
	return 0;
}
