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

int sum(lli n)
{
	int s=0;
	while(n)
	{
		int t=n%10;
		s+=t;
		n=n/10;
	}
	return s;
}
int main()
{
    speed;

    lli n;
    cin>>n;
    vector<int> a;
    int t=0,i=n-92;
    for(;i<n;i++)
    {
    	if((sum(i)+i)==n)
    	{
    		a.push_back(i);
    		t++;
    	}	
    }
    cout<<t<<endl;
    for(i=0;i<a.size();i++)
    	cout<<a[i]<<endl;

    return 0;

}