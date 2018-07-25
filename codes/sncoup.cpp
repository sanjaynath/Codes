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
        int i,j,vert=0,col=0,tot=0;
        for(j=0;j<n;j++)
        {
            if(v[0][j]=='*'&&v[1][j]=='*')
            {
                vert=1;
                col++;
            }
            else if(v[0][j]=='*'||v[1][j]=='*')
                col++;
        }
        cout<<col<<endl;
        tot=col-1;
        if(vert==1)
        {
            tot++;
            cout<<"vert\n";
        }

        if(tot==-1)
            tot=0;
        cout<<tot<<endl;

    }

    return 0;
}
