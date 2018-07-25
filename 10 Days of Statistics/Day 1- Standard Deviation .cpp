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
    std::vector<lli> v;
    std::vector<lli> hash(100001,0);
    lli sum=0;
    for(int i=0;i<n;i++)
    {
        lli a;
        cin>>a;
        v.push_back(a);
        sum+=a;

    }
    double mean = (double)sum/n;
    double sumofsq = 0.0;
    for(int i=0;i<n;i++)
    {
        sumofsq += (v[i]-mean)*(v[i]-mean);

    }
    double sd = sqrt((double)sumofsq/n);
    printf("%.1f",sd);

    return 0;
}