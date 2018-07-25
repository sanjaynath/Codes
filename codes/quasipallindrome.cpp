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
    while(n%10==0)
    {
        n/=10;
    }
    char s[100];
    int i=0;
    while(n)
    {
        s[i]=(char)((n%10)+'0');
        n/=10;
        i++;
    }
    int l=0;
    while(l<i)
    {
        if(s[l]!=s[i-l-1])
            break;
        l++;
    }
    if(l==i)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
