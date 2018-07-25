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
#define mod 1000000007

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

vector<int> rank(100002,-1);
vector<int> root(100002);
vector<lli> parent(100002,0);

int find(int x)
{
	if(root[x]==x)
		return x;
	return root[x]=find(root[x]);
}
void un(int x,int y)
{
	int a=find(x);
	int b=find(y);
	if(rank[a]<rank[b])
		root[b]=a;
	else if(rank[a]>rank[b])
		root[a]=b;
	else
	{
		root[a]=b;
		//write code for keeping track of repetitions of minimum	
	}
}

int main()
{
    speed;

    int n,m;
    cin>>n>>m;
    int i=1;
    while(i<=n)
    {
    	root[i]=i;
    	i++;
    }
   

    while(m--)
    {
    	int a,b;
    	cin>>a>>b;
    	if(find(a)!=find(b))
    		un(a,b);
    }
    for(i=1;i<=n;i++)
    	parent[root[i]]++;
    lli ans;
    for(i=1;i<=n;i++)
    	if(parent[i]!=0)
    		ans*=parent[i];
    cout<<ans%mod;
    return 0;
}











