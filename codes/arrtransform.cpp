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
    	vector<int> a(n);
    	vector<int> s;
    	input(a,n);
    	int i=0;
    	while(1)
    	{
    		if(a[i]!=0)
    		{
    			s.push_back(a[i]);
    			break;
			}
			i++;
    	}
    	i++;
    	for(;i<n;i++)
    	{
    		if(a[i]==0)
    			continue;
    		else if(a[i]==s.back())
    		{
    			s.pop_back();
    			s.push_back(2*a[i]);
    		}
    		else
    			s.push_back(a[i]);
    	}
    	int j=n-s.size();
    	for(i=0;i<n;i++)
    		s.push_back(0);
    	for(i=0;i<n;i++)
    		cout<<s[i]<<" ";
    	cout<<endl;
    }

    return 0;
}
