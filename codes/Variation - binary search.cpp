/*

			WRONG SOLUTION




*/


#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int n,k;
    cin>>n>>k;
    std::vector<lli> v;
    lli m=n;
    while(m--)
    {
    	lli a;
    	cin>>a;
    	v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    lli ans=0;
    for(int i=0;i<n-1;i++)
    {
    	cout<<i<<" ";
    	lli beg=i,end=n-1,mid=n; 
    	while(beg!=end)
    	{
    		//cout<<mid<<" ";
    		mid=(beg+end)/2;
    		if(v[mid]-v[i]<k)
    			beg=mid+1;
    		else if(v[mid]-v[i]>=k)
    			end=mid;
    		else
    			break;
    	}
    	
    	ans+=(n-mid);
    	cout<<ans<<endl;
    	//cout<<endl;
    }
    cout<<ans;
    

    return 0;

}