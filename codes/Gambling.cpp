#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int n;
    cin>>n;
    int m=n;
    vector<int> a,b;
    while(m--)
    {
    	int k;
    	cin>>k;
    	a.push_back(k);
    }
    m=n;
    while(m--)
    {
    	int k;
    	cin>>k;
    	b.push_back(k);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    //cout<<a[0]<<" "<<b[0]<<endl;
    int scorea=0, scoreb=0;
    int ia=0,ib=0;
    for(int i=0;i<2*n;i++)
    {
    	if(i%2==0)
	    {
	    	//cout<<"i = "<<i<<endl;
	    	if(ia<n && a[ia]>=b[ib])
	    	{
	    		//cout<<"a adding\n";
	    		scorea+=a[ia];
	    		//cout<<scorea<<endl;
	    		ia++;
	    		//a.erase(a.begin());
	    	}
	    	else if(ib<n && a[ia]<b[ib])
	    	{
	    		//cout<<"a deleting 1\n";
	    		//b.erase(b.begin());
	    		ib++;
	    	}
	    	else if(ia<n)
	    	{
	    		//cout<<"a adding\n";
	    		scorea+=a[ia];
	    		ia++;
	    		//a.erase(a.begin());
	    	}
	    	else
	    	{
	    		///cout<<"a deleting 2\n";
	    		//b.erase(b.begin());
	    		ib++;
	    	}
	    }
	    else
	    {
	    	if(ib<n && a[ia]<=b[ib])
	    	{
	    		//cout<<"b adding\n";
	    		scoreb+=b[ib];
	    		ib++;
	    		//b.erase(b.begin());
	    	}
	    	else if(ia<n &&  a[ia]>b[ib])
	    	{
	    		//cout<<"b deleting 1\n";
	    		//a.erase(a.begin());
	    		ia++;
	    	}
	    	else if(ib<n)
	    	{
	    		//cout<<"b adding\n";
	    		scoreb+=b[ib];
	    		//b.erase(b.begin());
	    		ib++;
	    	}
	    	else
	    	{
	    		//cout<<"b deleting 2\n";
	    		//a.erase(a.begin());
	    		ia++;
	    	}

	    }
    }
    //cout<<scorea<<" "<<scoreb<<endl;
    cout<<scorea-scoreb;


    return 0;

}