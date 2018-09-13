#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primecheck(long n1,long n2)
{
	bool c[100001];
	memset(c,true,sizeof(c));
	for(long i=2;i<=100000;i++)
	if(c[i]==true)
	for(long j=i*2;j<=100000;j+=i)
	c[j]=false;
	c[0]=c[1]=false;
	for(long i=n1+1;i<n2;i++)
	if(c[i]==true)
	cout<<i<<' ';
}
int main()
{
	long n1,n2;
	cin>>n1;
	if(cin)
	cin>>n2;
	if(cin){
	cout<<endl;
	primecheck(n1,n2); }
	else cout<<endl<<"Invalid";
	return 0;
}
