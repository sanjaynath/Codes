#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define speed ios_base::sync_with_stdio(0)
#define	all(v)	v.begin(),v.end()
#define maxi(v) max_element(all(v))-v.begin()
#define mini(v) min_element(all(v))-v.begin()
#define max(v) v[maxi(v)]
#define min(v) v[mini[v]]
#define find(v,n) find(all(v),n)

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

int main()
{
    speed;

    lli n,k,m,i;
    cin>>n>>k>>m;
    vector< vector<lli> > v;
    int flag=0;
    while(n--)
    {
    	//cout<<n<<endl;
    	lli x;
    	cin>>x;
    	if(v.empty())
    	{
    		vector<lli> a;
    		a.push_back(x);
    		v.push_back(a); 
    	}
    	else
    	{
    		i=0;
    		flag=0;
    		while(i<v.size())
    		{
    			//cout<<x<<" "<<i<<endl;
    			if(abs(v[i][0]-x)%m==0)
    			{
    				v[i].push_back(x);
    				flag=1;
				}
				i++;

    		}
    		//cout<<"yes\n";
    		if(flag==0)
    		{
	    		vector<lli> a;
	    		a.push_back(x);
	    		v.push_back(a); 
    		}
    	}
    }
   	i=0;
    flag=0;
    //cout<<"yess";
    while(i<v.size())
    {
    	if(v[i].size()>=k)
    	{
    		lli j=0;
    		cout<<"Yes\n";
    		while(j<k)
    		{
    			cout<<v[i][j++]<<" ";

    		}
    		flag=1;
    	}
    	i++;
    }
    if(flag==0)
    	cout<<"No\n";

    return 0;

}







