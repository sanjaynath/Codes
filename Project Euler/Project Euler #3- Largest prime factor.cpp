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
    	lli n;
    	cin>>n;

    	lli max=INT_MIN;
    	while(n%2==0)
    	{
    		max=2;
    		n/=2;
    	}
    	for(lli i=3;i<=sqrt(n);i+=2)
    	{
    		while(n%i==0)
    		{
    			max=i;
    			n/=i;
    		}
    	}
    	if(n>2)
    		max=n;
    	cout<<max<<endl;

    }

    return 0;

}