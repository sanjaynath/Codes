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
    vector<vector<int>> v;
    int m=n,i;
    while(m--)
    {
    	int a,d;
    	cin>>a>>d;
    	vector<int> p(2);
    	p[0]=a;
    	p[1]=d;
    	v.push_back(p);
    }
    //for(int i=0;i<v.size();i++) print(v[i]);

    lli day=v[0][0]+1;
    i=1;
    while(i<n)
    {
    	//cout<<i<<" "<<day<<endl;
    	lli q=floor((day-v[i][0])/v[i][1])+1;
    	//cout<<q<<endl;
    	day=v[i][0]+(q-1)*v[i][1]+1;
    	i++;
    }
    cout<<day-1<<endl;

    return 0;

}