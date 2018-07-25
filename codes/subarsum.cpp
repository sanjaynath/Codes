#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[1000000];
	cout<<"enter size of array\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0]+a[1];
	for(i=2;i<n;i++)
	{
		int sum=0;
		for(j=0;j<i;j++)
		{
			sum+=a[j];
		}
		if(sum>max)
			max=sum;
		for(j=i;j<n;j++)
		{
			sum+=a[j];
			sum-=a[j-i];
			if(sum>max)
				max=sum;
		}
	}
	cout<<"max subarray sum: "<<max<<endl;
}
