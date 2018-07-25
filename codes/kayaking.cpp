#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define speed ios_base::sync_with_stdio(0)
#define	all(v)	v.begin(),v.end()
#define maxi(v) max_element(all(v))-v.begin()
#define mini(v) min_element(all(v))-v.begin()
#define max(v) v[maxi(v)]
//#define min(v) v[mini[v]]
#define find(v,n) find(all(v),n)

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

int main()
{
    speed;

    int n,tota=0,totb=0;
    cin>>n;

    vector<int> v(2*n);
    input(v,2*n);
    sort(v.begin(),v.end());
    for(int i=0;i<=2*n-4;i+=2)
        tota+=abs(v[i]-v[i+1]);
    for(int i=2;i<=2*n-2;i+=2)
        totb+=abs(v[i]-v[i+1]);

    cout<<min(tota,totb)<<endl;


    return 0;
}
