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
    	int i;
    	int k=1,flag=1,s[11]={0},flag2=1;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		s[a[i]]=1;
    	} 
		
		s[0]=1;s[8]=1;s[9]=1;s[10]=1;
		for(int i=0;i<8;i++)
			if(s[i]==0)
				flag2=0;
			for(i=0;i<=n/2;i++)
			{
				//cout<<i<<endl;
				if((a[i]==a[n-i-1]) && (a[i]<=7))
					continue;
				else
				{
					flag=0;
					break;
				}

			} 
		
    	
    	if(flag==1&&flag2==1)

    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;

    }

}