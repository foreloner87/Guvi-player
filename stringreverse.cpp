#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(cin)
	{
	for(int i=s.length()-1;i>=0;i--)
	cout<<s[i];
	}
	else
	cout<<endl<<"Invalid";
	return 0;
}
