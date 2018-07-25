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
#define siz 100000
void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

vector<lli> root(siz),rnk(siz,1),h(siz,0),s(siz,0);

int find(int x)
{
	if(root[x]==x)
		return x;
	return root[x]=find(root[x]);
}

void un(int x,int y)
{
	size[x]
	int a=root[x];
	int b=root[y];
	if(a>b)
		root[a]=b;
	else if()
		root[a]=b;
	else
	{
		rnk[a]++;
		root[b]=a;
	}#include <bits/stdc++.h>
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
#define siz 100000
void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

vector<lli> root(siz),rnk(siz,1),h(siz,0),arr;

int find(int x)
{
	if(root[x]==x)
		return x;
	return root[x]=find(root[x]);
}

void un(int i,int x)
{
	int a=root[i];
	int b=root[x];
	if(a>b)
		{root[a]=b;
		s[i]+=s[x];
		s[x]++;

		}
}

int main()
{
    speed;

    int n;
    cin>>n;
    int i=2;
    root[1]=1;
    for(int j=2;j<=n;j++)
	{
		root[j]=j;
	}
    while(i<=n)
    {
    	char c;
    	cin>>c;
    	//cout<<"i= "<<i<<" "<<c<<endl;
    	if(c=='J')
    	{
    		int x;
    		cin>>x;
    		if(find(i)!=find(x))
    			un(i,x);

    		


    		/*for(int j=1;j<=n;j++)
		    	cout<<root[j]<<" ";
		    cout<<endl;*/
    		for(int k=1;k<=i;k++)
		    {
		    	//cout<<"k="<<k<<" "<<root[k]<<" "<<root[x]<<endl;
		    	if(root[k]==root[x]&&k!=i)
		    	{
		    		
		    		h[k]++;
		    	}
		    }


		    //cout<<


    	}
    	//else if(c=='N')
    	//{
    		//root[i]
    //	}
    	
    	/*for(int j=1;j<=n;j++)
		    	cout<<h[j]<<" ";
		    cout<<endl;*/
    	i++;
    }
    /*for(i=1;i<=n;i++)
    	cout<<root[i]<<" ";
    cout<<endl;
    for(int k=1;k<=n;k++)
    {
    	h[root[k]]++;
    }
    for(i=1;i<=n;i++)
    	cout<<h[i]<<" ";
    cout<<endl;*/
    for(int k=1;k<=n;k++)
    {
    	cout<<h[k]<<" ";
    }


    return 0;
}

}

int main()
{
    speed;

    int n;
    cin>>n;
    int i=2;
    root[1]=1;
    for(int j=2;j<=n;j++)
	{
		root[j]=j;
	}
    while(i<=n)
    {
    	char c;
    	cin>>c;
    	//cout<<"i= "<<i<<" "<<c<<endl;
    	if(c=='J')
    	{
    		int x;
    		cin>>x;
    		if(find(i)!=find(x))
    			un(i,x);

    		


    		/*for(int j=1;j<=n;j++)
		    	cout<<root[j]<<" ";
		    cout<<endl;*/
    		for(int k=1;k<=i;k++)
		    {
		    	//cout<<"k="<<k<<" "<<root[k]<<" "<<root[x]<<endl;
		    	if(root[k]==root[x]&&k!=i)
		    	{
		    		
		    		h[k]++;
		    	}
		    }


		    //cout<<


    	}
    	//else if(c=='N')
    	//{
    		//root[i]
    //	}
    	
    	/*for(int j=1;j<=n;j++)
		    	cout<<h[j]<<" ";
		    cout<<endl;*/
    	i++;
    }
    /*for(i=1;i<=n;i++)
    	cout<<root[i]<<" ";
    cout<<endl;
    for(int k=1;k<=n;k++)
    {
    	h[root[k]]++;
    }
    for(i=1;i<=n;i++)
    	cout<<h[i]<<" ";
    cout<<endl;*/
    for(int k=1;k<=n;k++)
    {
    	cout<<h[k]<<" ";
    }


    return 0;
}
