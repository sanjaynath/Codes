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

    lli s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;

    lli tot1,tot2;
    tot1=v1*s+2*t1;
    tot2=v2*s+2*t2;
    if(tot1<tot2)
    	cout<<"First";
	else if(tot1>tot2)
		cout<<"Second";
	else
		cout<<"Friendship";



    return 0;
}
