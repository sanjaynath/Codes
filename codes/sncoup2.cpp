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
        char v[2][1000001];
        cin>>v[0]>>v[1];
        int i,j;
        int up=0,dn=0,u=0,d=0,upflag=0,dnflag=0,p=0,horiz=0,x=0;

        for(j=0;j<n;j++)
        {
            if(v[0][j]=='*')
            {
                up=1;
                upflag=1;
                if(dnflag==1)
                {
                    p++;
                    upflag=0;
                    x--;
                }
                else
                    x++;
                dnflag=0;

            }

            if(v[1][j]=='*')
            {

                dn=1;
                dnflag=1;
                if(upflag==1)
                {
                    p++;
                    dnflag=0;
                    x--;
                }
                else
                    x++;
                upflag=0;

            }

        }
        int tot;
        if(p>0)
            horiz=1;
        if(horiz==1)
            tot=p+x;
        else
            tot=x-1;

        if(tot==-1)
            tot=0;
        cout<<tot<<endl;
    }

    return 0;
}
