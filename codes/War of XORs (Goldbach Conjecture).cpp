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
    	int n;
    	cin>>n;
    	int even=0, odd=0;
    	vector<int> v,e,o,hash(1000001,0);
    	while(n--)
    	{
    		int a;
    		cin>>a;
    		if(hash[a]==0)
    		{
    			if(a%2==0)
    			{
    				//even++;
    				e.push_back(a);
    			}
    			else
    			{
    				//odd++;
    				o.push_back(a);
    			}
    			hash[a]++;
    		}    	
    	}
    	int ne=e.size();
    	int no=o.size();
    	sort(e.begin(),e.end());
    	sort(o.begin(),o.end());
    	even = ne*(ne-1)/2;
    	odd = no*(no-1)/2;
    	//cout<<even<<" "<<odd<<endl;
    	for(int i=1;i<ne;i++)
    	{
    		int li = (int)log2(e[i]);
    		int lii = (int)log2(e[i-1]);
    		cout<<li<<" "<<lii<<endl;
    		if(e[i]-e[i-1]==2 && li==lii)
    			even--;
    	}

    	for(int i=1;i<no;i++)
    	{
    		int li = (int)log2(o[i]);
    		int lii = (int)log2(o[i-1]);
    		cout<<li<<" "<<lii<<endl;
    		if((o[i]-o[i-1]==2 && li==lii) || o[i-1]==1&&o[i]==3)
    			odd--;
    	}
    	cout<<even+odd<<endl;
    }

    return 0;

}