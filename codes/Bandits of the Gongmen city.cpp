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

vector<bool> prime(1000001,true);
vector<lli> primes;
void seive(int x,int n)
{

    for (lli p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (lli i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=x; p<=n; p++)
       if (prime[p])
       		primes.push_back(p);
}



int main()
{
    speed;
    lli x,y,k;
    cin>>x>>y>>k;
    seive(x,y);

    /*for(lli i=0;i<primes.size();i++)
    	cout<<primes[i]<<" ";*/
    //cout<<endl;
    lli min=INT_MAX;
    if(primes.size()<k)
    	cout<<-1;
    else
    {

    	for(lli i=0;i<primes.size();i++)
    	{
    		if(i+k-1<primes.size())
    		{
    			//cout<<primes[i+k-1]<<" "<<primes[i]<<endl;
    			if(primes[i+k-1]-primes[i]<min)
    				min=primes[i+k-1]-primes[i];
    		}

    	}
    	cout<<min+2;	
    }
    



    

    return 0;

}