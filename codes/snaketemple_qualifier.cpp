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
        int n;
        cin>>n;
        int arr[n];
        loop(i,0,n-1,1)
        {
            cin>>arr[i];
        }
        bool say=true;
        int len;
        if(arr[0]==1 && n%2==1)
        {
            len=n/2 ;
            loop(i,1,len,1)
            {
                if((arr[i]-arr[i-1])!=1)
                {
                    say=false;
                    break;
                }
            }
            if(say)
            {
                loop(i,len+1,n-1,1)
                {
                    if((arr[i-1]-arr[i])!=1)
                    {
                        say=false;
                        break;
                    }
                }
            }
            if(say)
            {
                cout<<"yes\n";
            }
            else
            {
                cout<<"no\n";
            }
        }
        else
        {
            cout<<"no\n";
        }
    }
    band;
}
