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

    int n,m,d;
    cin>>n>>m>>d;
    std::vector<lli> v;
    while(m--)
    {
    	int a;
    	cin>>a;
    	v.push_back(a);
    }
    std::vector<lli> q=v;
    sort(q.begin(),q.end());
    lli limit = q[n];
    for(lli i=0;i<v.size();i++)
    {
    	if(v[i]<limit)
    		cout<<v[i]<<" ";
    }


    return 0;

}