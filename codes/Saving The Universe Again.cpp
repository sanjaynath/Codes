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

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }

int main()
{
    speed;

    int t;
    cin>>t;
    while(t--)
    {
    	lli d;
    	string s;
    	cin>>d>>s;
    	vector<lli> c(30,0);
    	lli total=0.power=1,ans=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]=='C')
    		{
    			power*=2;
    			c[i]==power;
			}
    		else if(s[i]=='S')
    		{
    			total+=power;
    		}
    	}
    	i=s.length()-2;
    	while(total>d)
    	{
    		while(i>=0)
	    	{
	    		if(s[i]=='C'&&s[i+1]=='S')
	    		{
	    			s[i]='S';
	    			s[i+1]='C'
	    			c[i+1]=c[i];
	    			c[i]=0;
	    			total-=(c[i+1]/2);
	    			i++;
	    		}
	    		else
	    			i--;

	    	}
    	}	
    	
    }

    return 0;

}




