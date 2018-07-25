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
    string s;
    cin>>s;
    int i=0,sum=0;
    while(i<s.length())
    {
    	if(s[i]=='a')
    		sum+=36;
    	else if(s[i]='b')
    		sum+=38;
    	else if(s[i]==c)
    		sum+=35;
    }
    cout<<sum;
    return 0;
}
