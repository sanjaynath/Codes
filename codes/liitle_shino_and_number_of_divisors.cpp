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

void input(vector<lli> &v,lli n) { for(lli i=0;i<n;i++) cin>>v[i]; }
void print(vector<lli> &v) { for(lli i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }




void seive(lli m,lli prime[])
{

    bool prm[1000001];
    memset(prm, true, sizeof(prm));
    prm[0]=prm[1]=false;
    lli p,i,size=1000001,cnt=0;
    for (p=2; p*p<=size; p++)
    {
        if (prm[p] == true && cnt<m)
        {
            prime[cnt]=p;
            //cout<<prime[cnt]<<" ";
            i++;cnt++;
            for (i=p*2; i<=size; i += p)
                prm[i] = false;
        }
    }

}

lli mulfac(lli x)
{
    lli i,ans=x;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            ans*=i;
            if(i!=sqrt(x))
                ans*=(x/i);
        }
    }

    return ans;
}
lli countfac(lli x,lli prime[])
{
    lli i=0,tot=1;
    while(x!=1)
    {
        lli cnt=0;
        while(x%prime[i]==0)
        {
            cnt++;
            x/=prime[i];
        }
        tot*=(cnt+1);
        i++;
    }
    return tot;
}

int main()
{
    speed;
    lli n;
    cin>>n;
    lli prime[n];
    seive(n,prime);
    vector<lli> v(n);
    lli i,num=1;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        num*=pow(prime[i],v[i]);
    }
    //cout<<endl;
    //cout<<num<<endl;
    lli p=mulfac(num);
    //cout<<p<<endl;

    lli ans=countfac(p,prime);
    cout<<ans<<endl;



    return 0;
}
