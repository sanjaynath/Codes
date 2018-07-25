#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter size of array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=a[0],s=a[0],cnt=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
			cnt++;
		}
		else if(a[i]>l)
		{
			l=a[i];
			cnt++;
		}	
	}	
	cout<<"largest:"<<l<<endl<<"smallest:"<<s<<endl;
	cout<<"number of comparisons: "<<cnt<<endl;

}
