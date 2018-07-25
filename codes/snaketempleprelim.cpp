
 Source
/**
  *Gobind->>>architect034
  *NIT Silchar
  **/
#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false)
#define lli         long long int
#define ll        long long
#define ulli      unsigned long long int
#define loop(i,strt,end,in)    for(int i=strt ; i<=end ; i+=in)
#define ulta(i,strt,end,dec)      for(int i=strt ; i>=end ; i-=dec)
#define pb         push_back
#define popb       pop_back
#define pf         push_front
#define popf      pop_front
#define mp       make_pair
#define FF       first
#define SS       second
#define AND      &
#define OR       |
#define XOR      ^
#define all(v)      v.begin(),v.end()
#define allr(v)      v.rbegin(),v.rend()
#define vi         vector<int>
#define vlli       vector<lli>
#define vpp     vector<pair<int,int> >
#define mod         1000000007
#define band        return 0

void debug(string s)
{
    cout<<s<<"\n";
}

void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

lli GCD(lli a,lli b)
{
  lli c= a%b;
  while(c!=0)
  {
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

lli power(int a,int b)
{
    int ans=1;
    while(b!=0)
    {
        if(b%2==1)
        {
            ans*=a;
        }
        a=a*a;
        b/=2;
    }
    return ans;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli arr[n];
        lli ans=0;
        loop(i,0,n-1,1)
        {
            cin>>arr[i];
            ans+=arr[i];
        }
        lli ansl=ans;
        lli ansr=ans;
        lli le=(n-1)/2;
        lli leftdis=0,rightdis=n-1;
        lli l=0,r=n-1;
        bool lft=0,rgt=0;
        loop(i,0,le,1)
        {
            if(arr[i]<(i+1))
            {
                if(lft==0)
                {
                    l=i;
                    lft=1;
                }
                leftdis=i;
            }
        }
        for(lli i=n-1;i>=(n-le-1);i--)
        {
            if(arr[i]<(n-i))
            {
                if(rgt==0)
                {
                    r=i;
                    rgt=1;
                }
                rightdis=i;
            }
        }

        lli len=rightdis-leftdis+1;
        if(len%2==1)
        {
            len=(len+1)/2;
            // cout<<len<<"\n";
            ans=ans-((len)*(len+1));
            ans=ans+len;
        }
        else if(len%2==0)
        {
            len=len/2;
            ans=ans-((len)*(len+1));
            ans+=len;
        }
        l++;
        r=n-r;
        cout<<l<<" "<<r<<"\n";1
        if(l%2==1)
        {
            l=(l+1)/2;
            // cout<<len<<"\n";
            ansl=ansl-((l)*(l+1));
            ansl=ansl+l;
        }
        else if(l%2==0)
        {
            l=l/2;
            ansl=ansl-((l)*(l+1));
            ansl+=l;
        }
        if(r%2==1)
        {
            r=(r+1)/2;
            // cout<<len<<"\n";
            ansr=ansr-((r)*(r+1));
            ansr=ansr+l;
        }
        else if(r%2==0)
        {
            r=r/2;
            ansr=ansr-((r)*(r+1));
            ansr+=r;
        }
        cout<<l<<" "<<r<<"\n";
        cout<<leftdis<<" "<<rightdis<<"\n";
        lli o=min(ans,min(ansl,ansr));
        cout<<o<<"\n";
    }
    band;
}
