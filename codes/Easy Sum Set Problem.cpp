#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0); cin.tie(NULL) ;cout.tie(NULL)

int main()
{
    speed;

    int na,nc;
    cin>>na;
    vector<int> ans(101,0);
    vector<int> a(101,0),c(101,0);
    for(int i=0;i<na;i++)
    {
    	int k;
    	cin>>k;
    	a[k]=1;
    }
    cin>>nc;
    for(int i=0;i<nc;i++)
    {

    	int k;
    	cin>>k;
    	c[k]=1;

    }

    for(int i=1;i<101;i++)
    {
    	if(a[i]==1)
    		for(int j=1;j<101;j++)
    		{
    			//cout<<j-i<<" ";
    			if(c[j]==1)
    				ans[j-i]=1;
    		}
	}	

    /*for(int i=0;i<101;i++)
    	if(ans[i]==1)
    		cout<<i<<" ";
    	cout<<endl;*/
    for(int i=1;i<101;i++)
    {
    	//cout<<i<<endl;
    	if(a[i]==1)
    	{
    		for(int j=1;j<101;j++)
    		{
    			if(ans[j]==1 && c[i+j]!=1)
    				ans[j]=0;
    		}
    	}
    }
    for(int i=1;i<101;i++)
    	if(ans[i]==1)
    		cout<<i<<" ";
    return 0;

}