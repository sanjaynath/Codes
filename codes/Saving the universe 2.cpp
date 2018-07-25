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
    lli j=1;
    while(j<=t)
    {
    	lli d;
    	string s;
    	cin>>d>>s;
    	vector<lli> c(30,0);
    	lli total=0,power=1,ans=0,i;
        //cout<<s<<endl;
    	for(i=0;i<s.length();i++)
    	{
    		if(s[i]=='C')
    		{
    			power*=2;
    			c[i]=power;
			}
    		else if(s[i]=='S')
    		{
    			total+=power;
    		}
    	}
        //for(int k=0;k<s.length();k++)
          //  cout<<c[k]<<" ";
    	lli flag=1;
    	while(total>d)
    	{
            i=s.length()-2;
    		while(i>=0)
	    	{
                //cout<<i<<endl;
	    		if(s[i]=='C'&&s[i+1]=='S')
	    		{
	    			s[i]='S';
	    			s[i+1]='C';
	    			c[i+1]=c[i];
	    			c[i]=0;
	    			total-=(c[i+1]/2);
                    ans++;
                    break;
	    		}
	    		i--;
	    	}
            if(i<0)
            {
                flag=0;
                break;
            }
    	}	
        if(flag==1)
            cout<<"Case #"<<j<<": "<<ans<<endl;
        else
            cout<<"Case #"<<j<<": "<<"IMPOSSIBLE\n";


        j++;
    	
    }

    return 0;

}




