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
    	int a,b;
    	cin>>a>>b;
    	int i=n;
    	std::vector<int> hash(10001,0);
    	while(i--)
    	{
    		int k;
    		cin>>k;
    		hash[k]++;

    	}
    	double ans=(double)((double)hash[a]*(double)hash[b]/((double)n*(double)n));
    	//cout<<hash[a]<<" "<<hash[b]<<endl;
    	printf("%.10lf\n",ans );
    }

    return 0;

}