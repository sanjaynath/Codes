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

    int a[3][2],n,p,q,r;
    cin>>n;
    cin>>p>>q>>r;
    if(p>q)
    {
    	a[0][0]=2;
    	a[0][1]=q;
	}
    else
    {
    	a[0][0]=1;
    	a[0][1]=p;
	}
    if(p>r)
    {
    	a[1][0]=2;
    	a[1][1]=r;
	}
    else
    {
    	a[1][0]=0;
    	a[1][1]=p;
	}
    if(q>r)
    {
    	a[2][0]=1;
    	a[2][1]=r;
	}
    else
    {
    	a[2][0]=0;
    	a[2][1]=q;
    }

    int t=0,i=0,d=0;

    while(n--)
    {
    	t+=d;
    	//cout<<i<<" ";
    	d=a[i][1];
    	i=a[i][0];
    }
    cout<<t<<endl;

    return 0;

}