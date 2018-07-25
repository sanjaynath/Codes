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

    int t;
    cin>>t;
    lli j=1;
    while(j<=t)
    {
    	int n;
    	cin>>n;
    	vector<lli> a;
    	int i;
    	for(i=0;i<n;i++)
    	{
    		lli v;
    		cin>>v;
    		a.push_back(v);
    	}
    	bool done=false;
    	while(!done)
    	{
    		done=true;
    		for(i=0;i<n-2;i++)
    		{
    			if(a[i]>a[i+2])
    			{
    				done=false;
    				lli temp=a[i];
    				a[i]=a[i+2];
    				a[i+2]=temp;
    			}
    		}
    	}
    	for(i=0;i<n-1;i++)
    		if(a[i]>a[i+1])
    		{
    			cout<<"Case #"<<j<<": "<<i<<endl;
    			break;
    		}
    	if(i==n-1)
    		cout<<"Case #"<<j<<": "<<"OK\n";

    	j++;
    }

    return 0;

}