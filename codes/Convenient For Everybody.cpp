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

    lli n;
    cin>>n;
    lli i=n,j;
    vector<lli> v;
    while(i--)
    {
    	lli a;
    	cin>>a;
    	v.push_back(a);

    }
    lli s,f;
    cin>>s>>f;
    lli l=f-s,sum=0;
    for(i=0;i<l;i++)
    	sum+=v[i];
    lli max=sum,ind=0;
    for(i=0,j=i+l;i<n;j++,i++)
    {
    	//cout<<i<<" "<<j<<endl;
    	sum=sum+v[j]-v[i];
    	//cout<<sum<<" ";
    	if(sum>max)
    	{
    		max=sum;
    		ind=i+1;
    	}
    	if(j==n-1)
    		j=-1;
    }
    //cout<<endl<<ind<<endl;
    lli b=s-ind;
    if(b>0)
    	cout<<b;
    else
    	cout<<b+n;
    return 0;
}
