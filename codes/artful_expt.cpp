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

void input(vector<lli> &v,lli n) { for(lli i=0;i<n;i++) cin>>v[i]; }
void print(vector<lli> &v) { for(lli i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

int main()
{
	lli n,tot=0,i,j;
	cin>>n;
	vector<lli> a(n),b(n),hash(8000001,0);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		hash[a[i]]=1;
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		hash[b[i]]=1;
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int x=a[i]^b[j];
			if(hash[x]==1)
				tot++;
		}
	}
	if(tot%2==0)
		cout<<"Karen\n";
	else
		cout<<"Koyomi\n";

	return 0;
}











