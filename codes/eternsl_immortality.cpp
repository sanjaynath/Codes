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
	lli a,b;
	cin>>a>>b;
	lli d=b-a,ans;
	a=a%10;
	b=b%10;
	if(d>=5)
		ans=0;
	else if(d==0)
		ans=1;
	else if(d==1)
		ans=b;
	else if(d==2)
		ans=b*(b-1);
	else if(d==3)
		ans=b*(b-1)*(b-2);
	else if(d==4)
		ans=b*(b-1)*(b-2)*(b-3);
	ans%=10;
	cout<<ans<<endl;

}







