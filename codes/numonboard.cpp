#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define speed ios_base::sync_with_stdio(0)
#define all(v)  v.begin(),v.end()
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

    lli k;
    string s;
    cin>>k>>s;
    
    

    lli i=0,sum=0;
    sort(s.begin(),s.end());

    while(i<s.length())
    {
        sum+=(s[i]-'0');
        i++;
    }
    i=0;
    while(sum<k)
    {
        sum-=(s[i]-'0');
        sum+=9;
        i++;
    }
    cout<<i;

    return 0;
}
