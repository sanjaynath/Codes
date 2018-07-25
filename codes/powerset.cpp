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
    while(t--)
    {
    	int n;
    	cin>>n;
    	string s;
    	set<string> ans;
    	cin>>s;

    	int i;
    	for(i=1;i<pow(2,n);i++)
    	{
    		vector<int> a(n);
    		int j=i,x=n-1;
    		while(j!=0)
    		{
    			a[x--]=j%2;
    			j/=2;
    		}
    		string p;
    		for(j=0;j<n;j++)
    		{
    			if(a[j]==1)
    				p.push_back(s[j]);
    		}
    		ans.insert(p);
    	}
    	auto it=ans.begin();
    	for(;it!=ans.end();it++)
    		cout<<*it<<" ";
    	cout<<endl;
    }
}