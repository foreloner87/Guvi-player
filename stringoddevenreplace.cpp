#include<iostream>
using namespace std;
int main()
{
	string stl;
	getline(cin,stl);
	if(cin)
	{
		for(int i=0;i<stl.length();i+=2)
		swap(stl[i],stl[i+1]);
		cout<<endl<<stl;
	}
	else cout<<endl<<"Invalid";
	return 0;
}
