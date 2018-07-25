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

    int n;
    cin>>n;
    int i=0;
    vector<lli> v;
    while(i<n)
    {
        int m;
        cin>>m;
        v.push_back(m);
        i++;
    }
    sort(v.begin(),v.end());
    lli sum=0,flag=0;
    for(i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                sum=v[i]+v[j];
                if(v[k]<sum)
                {
                    flag=1;
                    cout<<sum+v[k]<<endl;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
                break;
    }
    if(flag==0)
        cout<<-1;

    return 0;
}
