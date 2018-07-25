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

lli i=0;
void build(vector<char> v[],string s,lli col)
{
	if(s[i]=='(')
	{
		i++;
		build(v,s,col-1);
	}
	else if(s[i]==')')
	{
		i++;
		build(v,s,col+1);
	}
	else
	{
		if(s[i]!='.')
			v[col].push_back(s[i]);
	}
	i++;
}

int main()
{
    speed;

    int t;
    cin>>t;

    while(t--)
    {
    	vector<char> v[100000];
    	int col;
    	cin>>col;
    	string s;
    	cin>>s;

    	build(v,s,20000);
    	lli j=0;
    	if(!v[col+20000].empty())
	    {
	    	while(j<v[col+20000].size())
	    	{
	    		cout<<v[col+20000][j];
	    		j++;
	    	}
    	}
    	else 
    		cout<<"Common Gandhijee!";
    	cout<<endl;

    }

    return 0;

}









