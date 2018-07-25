#include<bits/stdc++.h>
using namespace std;
int main()
{

	int i,a[1000],b[1000],sum[1000],u[1000],v[1000],ans[1000],p,q,x=0,y=0;
	cin>>p>>q;
	int c=p,d=q;
	
	while(c!=0)
	{
		u[x++]=c%2;
		c/=2;
	}
	while(d!=0)
	{
		v[y++]=d%2;
		d/=2;
	}	
	int m=0,n=0;	
	for(i=x-1;i>=0;i--)
		a[m++]=u[i];
	for(i=y-1;i>=0;i--)
		b[n++]=v[i];
		
	for(i=0;i<x;i++)
		cout<<a[i];
	cout<<endl;
	for(i=0;i<y;i++)
		cout<<b[i];
	cout<<endl;
	
	
	int carry=0,m=x-1,n=y-1;
	i=0;
	while(m!=0&&n!=0)
	{
		c[i]=a[m]+b[n]+carry;
		if(c[i]==2)
		{
			c[i]=0;
			carry=1;
		}
		if(c[i]==3)
		{
			c[i]=1;
			carry=1;
		}
		i++;
		m--;
		n--;
	}
	


}
