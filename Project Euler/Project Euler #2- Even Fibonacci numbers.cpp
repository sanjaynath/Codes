#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    lli t;
    cin>>t;
    while(t--)
    {
    	lli n;
    	cin>>n;
    	lli f=0;
	    lli s=1;
	    lli t=1;
	    lli sum=0;
	    do	    
	    {
	    	if(t%2==0)
	    		sum+=t;
	    	f=s;
	    	s=t;
	    	t=f+s;
	    }while(t<=n);

	    cout<<sum<<endl;

    }

    return 0;

}