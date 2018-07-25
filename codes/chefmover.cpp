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
    	int n,d;
    	cin>>n>>d;
    	int i,j,flag1=1,flag2=1,sum=0,ev=0,odd=0;
    	vector<int> a(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sum+=a[i];
    	}
    	if(sum%n!=0)
    		flag1=0;					//overall avg
    	int avg=sum/n;
    	int s;

    	set<int> st;
    	for(i=0;i<d;i++)
    	{
    		s=0;
    		for(j=i;j<n;j+=d)
    			s+=a[j];
    		s/=(j/d);
    		st.insert(s);
    	}
    	if(st.size()>1 || (st.size()==1 && (*(st.begin())!=avg) ) )
    		flag2==0;					//every Dth grp avg

    	if(flag1==0 || flag2==0)
    		continue;
    	else
    	{

    		for(i=0;i<n;i++)
    		{

    			/// counting moves ////
    		}





    	}







    }
}