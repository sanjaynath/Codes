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

    int n;
    cin>>n;
    std::vector<int> v;
    std::vector<int> w;
    for(lli i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	v.push_back(a);
    }
    lli tot=0;
    for(lli i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	tot+=a;
    	w.push_back(a);
    }
    lli sum=0;
    for(lli i=0;i<n;i++)
    {
    	sum+=v[i]*w[i];	
    }
    double wt_mean = (double)sum/tot;
    printf("%.1f\n",wt_mean);

    return 0;

}