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
    	lli start=1;
    	lli end=100000;
    	lli mid;
    	while(start!=end)
    	{
    		mid=(start+end)/2;
    		lli sum=mid*(mid+1)/2;
    		if(sum<n)
    		{
    			start=mid;
    			if((mid+1)*(mid+2)/2 > n)
    				break;
			}
    		else if(sum>n)
    			end=mid;
    		else
    			break;
    	}
    	cout<<mid<<endl;
    }

    return 0;

}