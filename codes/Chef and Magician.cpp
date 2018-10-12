#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
	speed;

	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x>>s;
		int flag=x;
		while(s--)
		{
			int a,b;
			cin>>a>>b;
			if(a==flag)
				flag=b;
			else if(b==flag)
				flag=a;
		}
		cout<<flag<<endl;	
	}
	

	return 0;

}