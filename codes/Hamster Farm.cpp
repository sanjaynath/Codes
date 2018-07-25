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

    lli n,k;
    cin>>n>>k;
    lli i=0,m=INT_MAX,boxi,boxw,flag=0;
    while(i<k)
    {
    	lli a;
    	cin>>a;
    	if(a<=n && n%a<m)
    	{
    		boxi=i+1;
    		boxw=a;
    		m=n%a;
    		flag=1;
		}
		i++;
    }
    if(flag==1)
    	cout<<boxi<<" "<<n/boxw;
    else
    	cout<<1<<" "<<0;

    return 0;
}
