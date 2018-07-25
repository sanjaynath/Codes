#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int n;
    cin>>n;
    stack<int> s;
    int depth=INT_MIN,depthi=0,max=INT_MIN,maxi=0,
    			len=0,dep=0,lenstart=0,depstart=0,flag=1;
    int i=1;
    while(i<=n)
    {
    	int a;
    	cin>>a;
    	//cout<<a<<endl;
    	if(s.empty())
    	{
    		if(len>max)
    		{
    			max=len;
    			maxi=lenstart;
    		}
    		lenstart=i;
    		len=0;


    		if(dep>depth)
    		{
    			depth=dep;
    			depthi=depstart;
    		}
    	}
    	if(a==1)
		{
			s.push(a);
			dep++;
			len++;
			if(dep>depth)
    		{
    			depth=dep;
    			depthi=i;
    		}
			//cout<<a<<"pushed len="<<len<<endl;
		}
    	else
    	{
    		s.pop();
    		dep--;
    		len++;
    		//cout<<a<<"popped len="<<len<<endl;
    	}


    	i++;

    }
    if(len>max)
	{
		max=len;
		maxi=lenstart;
	}

    cout<<depth<<" "<<depthi<<" "<<max<<" "<<maxi;

    return 0;



}