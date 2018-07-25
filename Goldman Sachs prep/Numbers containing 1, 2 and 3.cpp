#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

bool check(lli n)
{
	while(n)
	{
		lli x=n%10;
		if(x!=1 && x!=2 && x!=3)
			return false;
		n=n/10;
	}
	return true;
}
int main()
{
    speed;

    int t;
    cin>>t;
    while(t--)
    {
    	lli n;
    	cin>>n;
    	std::vector<lli> v;
    	bool flag=true;
    	while(n--)
    	{
    		lli a;
    		cin>>a;
    		flag=check(a);
    		if(flag)
    			v.push_back(a);
    	}
    	sort(v.begin(),v.end());
    	if(v.size() == 0)
    		cout<<-1;
    	else
    		for(lli i=0;i<v.size();i++)
    			cout<<v[i]<<" ";
    	
    	cout<<endl;

    }

    return 0;

}