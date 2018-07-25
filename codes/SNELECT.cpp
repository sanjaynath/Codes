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
        string s;
        cin>>s;
        int i;
        int n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]=='m')
            {
                if(i>0&&s[i-1]=='s')
                    s[i-1]='*';
                else if(i<n-1&&s[i+1]=='s')
                    s[i+1]='*';
            }
        }
        int m=0,sn=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='m')
                m++;
            else if(s[i]=='s')
                sn++;
        }
        if(sn>m)
            cout<<"snakes\n";
        else if(m>sn)
            cout<<"mongooses\n";
        else
            cout<<"tie\n";
    }

    return 0;
}
