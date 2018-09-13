#include<iostream>
using namespace std;
int main()
{
	string stl;
	cin>>stl;
	if(cin)
	{
		stl.append( 1,'.');
		cout<<endl<<stl;
	}
	return 0;
}
