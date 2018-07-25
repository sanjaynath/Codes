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

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v,int n) { for(int i=1;i<=n;i++) cout<<v[i]<<" "; cout<<endl; }

vector<int> risk(1002);
vector<int> root(1002);
vector<int> v[1002];
vector<lli> same(1002,0);
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
	if(risk[a]>risk[b])
		root[b]=a;
	else if(risk[a]<risk[b])
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

    int n;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
    	root[i]=i;
    	i++;
    }

    int d=1;
    while(d<=n)
    {
    	cin>>risk[d];
    	d++;
    }
    int k;
    cin>>k;
    while(k--)
    {
    	int u,v;
    	cin>>u>>v;
    	if(find(u)!=find(v))
    		un(u,v);
    }
    i=1;
    while(i<=n)
    {
    	//v[root[i]].push_back(i);//push all elements of set into its root array
    	if(risk[i]==risk[find(i)])
    		same[root[i]]++;//to keep track of same
    	i++;
    }
    //print(risk,n);
    //print(root,n);
    //print(same,n);
    i=1;
    lli ans=1;
    while(i<=n)
    {
    	if(same[i]!=0)
    		ans*=same[i];//multiply all indices which are roots of sets
    	//cout<<ans<<endl;
    	ans%=1000000007;
    	i++;

    }
    //code for calc num of ways to select min from each set/
    cout<<ans;

    return 0;
}
