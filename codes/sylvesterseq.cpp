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

    ull t;
    cin>>t;

    vector<lli> q(t);
    ull i=0,k=t;
    while(k--)
    {
    	int n;
    	cin>>n;
    	q[i++]=n;
    }
    ull m=max(q);
    vector<ull> a(m);
    vector<ull> mul(m);
    ull mod=1000000007;
    a[0]=2;
    mul[0]=2;
    //a[1]=3;
    for(i=1;i<m;i++)
    {

    	a[i]=(mul[i-1]+1)%mod;
    	mul[i]=((a[i])*mul[i-1])%mod;
    }

    ull j=0;
    while(t--)
    {
    	for(i=0;i<q[j];i++)
    		cout<<a[i]<<" ";
    	cout<<endl;
    	j++;
    }



    return 0;
}
