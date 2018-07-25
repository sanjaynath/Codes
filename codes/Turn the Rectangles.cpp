#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int n;
    cin>>n;
   	vector<vector<int> > v;
   	int m=n;
    while(m--)
    {
    	int w,h;
    	cin>>w>>h;
    	vector<int> a(2);
    	a[0]=w;
    	a[1]=h;
    	v.push_back(a);
    }
    bool flag=true;

    if(v[n-1][0]<v[n-1][1])
	{
		int temp=v[n-1][0];
		v[n-1][0]=v[n-1][1];
		v[n-1][1]=temp;
	}
    for(int i=n-2;i>=0;i--)
    {

    	if(v[i][0]<v[i][1])//w<h
    	{
    		if(v[i][0]>=v[i+1][1])
    		{
    			int temp=v[i][0];
    			v[i][0]=v[i][1];
    			v[i][1]=temp;
    		}
    	}
    	else //w>h
    	{
    		if(v[i][1]<v[i+1][1])
    		{
    			int temp=v[i][0];
    			v[i][0]=v[i][1];
    			v[i][1]=temp;
    		}
    	}

    	if(v[i][1]<v[i+1][1])
    	{
    		flag=false;
    		break;
    	}	
    }
    if(flag)
    	cout<<"YES";
    else
    	cout<<"NO";


    return 0;

}