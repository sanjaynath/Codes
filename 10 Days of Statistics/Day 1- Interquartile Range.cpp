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
    std::vector<int> x;
    for (int i = 0; i < n; ++i)
    {
    	int a;
    	cin>>a;
    	x.push_back(a);
    }
    std::vector<int> f;
    for (int i = 0; i < n; ++i)
    {
    	int a;
    	cin>>a;
    	f.push_back(a);
    }
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 1; j <= f[i]; ++j)
    	{
    		v.push_back(x[i]);		
    	}
    }
    
   	sort(v.begin(),v.end());

   	n=v.size();
    double q2,q1,q3;
    int m=n/2;
    if(n%2==0)
    {
    	q2=(double)(v[n/2]+v[n/2-1])/2;
    	if(m%2==0)
	    {
	    	q1=(double)(v[m/2]+v[m/2-1])/2;
	    	q3=(double)(v[m+m/2]+v[m+m/2-1])/2;
	    }
	    else
	    {
	    	q1=(double)v[m/2];
	    	q3=(double)v[m+m/2];
	    }
	}
    else
    {
    	q2=(double)v[n/2];
    	if(m%2==0)
	    {
	    	q1=(double)(v[m/2]+v[m/2-1])/2;
	    	q3=(v[m+m/2+1]+v[m+m/2])/2;
	    }
	    else
	    {
	    	q1=(double)v[m/2];
	    	q3=(double)v[m+m/2+1];
	    }
	}

	printf("%.1f",q3-q1);

    return 0;

}






