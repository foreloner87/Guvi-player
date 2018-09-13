#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int cmp,count=0;
	if((s1.length())>= (s2.length()))
	cmp=s1.length();
	else
	cmp=s2.length();
	count=cmp;
	for(int i=0;i<cmp;i++)
	if(s1[i]==s2[i])
	--count;
	if(count==1)
	cout<<endl<<"Yes";
	else
	cout<<endl<<"No";
	return 0;
	
}
