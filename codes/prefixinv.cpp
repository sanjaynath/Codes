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

void flip(string &a,int n)
{
    for(int i=0;i<=n;i++)
    {
        if(a[i]=='1')
            a[i]='0';
        else
            a[i]='1';
    }
}
int main()
{
    speed;

    string s;
    cin>>s;
    int i,j,max=-1,cnt=0;
    while(1)
    {
        max=-1;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                max=i;

        }
        if(max==-1)
            break;
        else
        {
            cnt++;
            flip(s,max);
        }
    }
    cout<<cnt;

    return 0;
}
