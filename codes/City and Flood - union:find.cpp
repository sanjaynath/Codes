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
	root[y]=x;
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
    	int i,j;
    	cin>>i>>j;
    	if(find(i)!=find(j))
    		un(i,j);
    }
    
    for(i=1;i<=n;i++)
    	parent[root[i]]++;
    lli ans=0;
    for(i=1;i<=n;i++)
    	if(parent[i])
    		ans++;

    	cout<<ans;
    return 0;
}
