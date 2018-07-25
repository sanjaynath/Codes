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
//#define find(v,n) find(all(v),n)

//void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<lli> &v,int n) { for(int i=1;i<=n;i++) cout<<v[i]<<" "; cout<<endl; }

vector<lli> v(1000001,1),product(1000001);
int find(lli x)
{
	if(x<10)
	{
		return x;
	}
	return find(product[x]);	

}
int main()
{
    speed;
    lli i;

    //cout<<"start";
    for(i=1;i<1000001;i++)
    {
    	v[i]=i;
    }
    for(i=1;i<1000001;i++)
    {
    	//cout<<i<<endl;
    	lli p=1,y,x=i;
    	while(x)
    	{	
    		y=x%10;
    		if(y!=0)
    			p*=y;
    		x=x/10;
    	}
    	product[i]=p;
    }
    for(i=1;i<1000001;i++)
    {
    	v[i]=find(v[i]);
    }
    //print(v,20);
    //cout<<v[73];

    vector<lli> a[10]; 
    for(lli i=1;i<1000001;i++)
    	a[v[i]].push_back(i);

    int q;
    cin>>q;
    while(q--)
    {
    	int l,r,k;
    	cin>>l>>r>>k;
    	lli start=lower_bound(a[k].begin(),a[k].end(),l)-a[k].begin();
    	lli end=upper_bound(a[k].begin(),a[k].end(),r)-a[k].begin();
    	lli ans=end-start;
    	cout<<ans<<endl;
    }
    return 0;
}






