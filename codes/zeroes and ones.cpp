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
    lli ones=0,zeroes=0,i,j;
    vector<lli> oz,z,ind;
    for(i=n-1;i>0;i--)
    {
    	if(s[i]=='1')
    	{
    		oz.push_back(zeroes);
    		ind.push_back(n-i);
    		ones++;
    	}
    	else
    	{
    		//z.push_back(ones);
    		zeroes++;
    	}
    }
    //for(i=0;i<oz.si)
    lli q;
    cin>>q;
    while(q--)
    {
    	lli k;
    	cin>>k;
    	lli seq=0,prev=0,coordo;
    	for(j=0;j<oz.size();j++)
	    {
	    	prev=seq;
	    	seq+=oz[j];   
	    	if(seq>=k)
	    	{
	    		coordo=ind[j];
	    		break;
	    	}
	    }
	    lli d=k-prev,coordz;
	    for(int k=coordo;k<n;k++)
	    {
	    	if(s[i]=='0')
	    		d--;
	    	if(d==0)
	    		break;
	    }
	    coordz=k;
	    cout<<coordo<<" "<<coordz<<endl;
	    
    }
    


    return 0;
}
