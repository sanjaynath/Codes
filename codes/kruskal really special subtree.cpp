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

vector<int> root(10009,0);
vector<int> rnk(10009,0);
vector<pair<int, pair<int, int> > > mst;
lli sum=0;

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

//comparator
bool comparesum(const pair<int, pair<int, int> >  v1, const pair<int, pair<int, int> > v2)
{
	if(v1.first!=v2.first)
		return (v1.first<v2.first);
	return ((v1.first+v1.second.first+v1.second.second) <= (v2.first+v2.second.first+v2.second.second) );
}
int find(int x)
{
	if(root[x]==x)
		return x;
	return root[x]=find(root[x]);
}
void un(int x,int y)
{
	int a=root[x];
	int b=root[y];
	if(rnk[a]>rnk[b])
		root[b]=a;
	else if(rnk[a]<rnk[b])
		root[a]=b;
	else
	{
		root[b]=a;
		rnk[a]++;
	}
}
int main()
{
    speed;

    int n,m;
    cin>>n>>m;
    int p=n,q=m;
    vector<pair<int, pair<int, int> > > edges;
    while(q--)
    {
    	int u,v,w;
    	cin>>u>>v>>w;
    	edges.push_back({w, {u, v}});
    	sort(edges.begin(),edges.end(),comparesum);

    }
    int i=0;
    /*while(i<m)
    {
    	cout<<edges[i].first<<" "<<edges[i].second.first<<" "<<edges[i].second.second<<endl;
    	i++;
    }*/
	i=1;
    while(i<=n)
    {
    	root[i]=i;
    	i++;
    }
    i=0;
    int ctr=0;
    while(i<m&&ctr<(n-1))
    {
    	if(find(edges[i].second.first)!=find(edges[i].second.second))
    	{
    		sum+=edges[i].first;
    		ctr++;
    		mst.push_back({edges[i].first,{edges[i].second.first,edges[i].second.second}});
    		un(edges[i].second.first,edges[i].second.second);
    	}
    	i++;
    }
    cout<<sum<<endl;


    return 0;
}
