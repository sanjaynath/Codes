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
#define siz 1000000
bool prime[siz+1];
void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }

void seive()
{
    
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=siz; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=siz; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    //for (int p=2; p<=n; p++)
      // if (prime[p])
        //  cout << p << " ";
}

int main()
{
    speed;
    lli t;
    cin>>t;
    seive();
    while(t--)
    {
    	lli n;
    	cin>>n;
    	if(prime[n])
    		cout<<-1;
    	else
    	{	
	    	int m=2,prev=-1,diff=-1,min=INT_MAX,flag=0;
	    	vector<lli> s; 
	    	while(m<=sqrt(n))
	    	{
	    		if(n%m==0)
	    		{
	    			if(prime[m])
	    			{
	    				/*if(prev==-1)
	    					prev=m;
	    				else
	    					diff=m-prev;*/
	    				s.push_back(m);
	    				//cout<<m<<endl;
	    			}
	    			if((n/m)!=m&&prime[n/m])
	    			{
	    				//cout<<n/m<<endl;
	    				s.push_back(n/m);
	    			}

	    		}
	    		m++;

	    	}
	    	//auto it=s.begin();it++;
	    	if(s.size()>1)
		    {
		    	sort(s.begin(),s.end());
		    	for(int it=1;it<s.size();it++)
		    	{
		    		diff=s[it]-s[it-1];
		    		if(diff<min)
		    			min=diff;
		    		if(min==1)
		    			break;
		    	}
		    	cout<<min<<endl;
	    	}
	    	else
	    		cout<<-1;
    	}
    }


    return 0;
}
