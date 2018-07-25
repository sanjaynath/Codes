#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[1000],e[1000],o[1000],x=0,y=0;
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			e[x++]=a[i];
		else
			o[y++]=a[i];
	}
	

	cout<<"even array\n";
	for(i=0;i<x;i++)
		cout<<e[i]<<" ";
	cout<<endl;
	cout<<"even array\n";
	for(i=0;i<y;i++)
		cout<<o[i]<<" ";
	cout<<endl;
	return 0;

}
