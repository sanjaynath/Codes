#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[1000000];
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min=INT_MAX,min2=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(a[i]<=min)
		{
			min2=min;
			min=a[i];
		}
		else if(a[i]<min2)
		{
			min2=a[i];
		}
	}
	cout<<"2nd smallest number : "<<min2<<endl;

}
