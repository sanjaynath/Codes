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
        char v[2][501],u[2][501];
        cin>>v[0]>>v[1];
        memcpy(u, v, sizeof(u));
        int i=0,j,cnt=0,flag=0,m;
        for(j=0;j<n;j++)
        {
            if(v[0][j]=='#'||v[1][j]=='#')
            {
                cnt++;
                if(cnt==1)
                    m=j;
            }
        }
        cnt=cnt+m-1;
        //cout<<cnt<<endl;
        for(j=m;j<cnt;)
        {
            //cout<<i<<" "<<j<<endl;
            if(i==0)
            {
                if(v[i+1][j]=='#')
                {
                    v[i][j]='0';
                    i++;
                }
                else if(v[i][j+1]=='#')
                {
                    v[i][j]='0';
                    j++;
                }
                else
                    break;
            }
            else
            {
                if(v[i-1][j]=='#')
                {
                    v[i][j]='0';
                    i--;
                }
                else if(v[i][j+1]=='#')
                {
                    v[i][j]='0';
                    j++;
                }
                else
                    break;
            }
        }
        //cout<<j<<endl;
        if(j==cnt)
            flag=1;

        memcpy(v, u, sizeof(v));

        i=1;
        for(j=m;j<cnt;)
        {
            if(i==0)
            {
                if(v[i+1][j]=='#')
                {
                    v[i][j]='0';
                    i++;
                }
                else if(v[i][j+1]=='#')
                {
                    v[i][j]='0';
                    j++;
                }
                else
                    break;
            }
            else
            {
                if(v[i-1][j]=='#')
                {
                    v[i][j]='0';
                    i--;
                }
                if(v[i][j+1]=='#')
                {
                    v[i][j]='0';
                    j++;
                }
                else
                    break;
            }

        }
        if(j==cnt)
            flag=1;

        if(flag==1)
            cout<<"yes\n";
        else
            cout<<"no\n";


    }
    return 0;
}
