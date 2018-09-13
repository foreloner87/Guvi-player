#include<iostream>
using namespace std;
int main()
{
	int n;
	long fact=1;
	cin>>n;
	if(cin) {
	for(long i=n;i>0;i--)
	fact*=i;
	cout<<endl<<fact; }
	else
	cout<<endl<<"Invalid";
	return 0;
}
