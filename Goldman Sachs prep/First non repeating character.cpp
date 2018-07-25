//https://practice.geeksforgeeks.org/problems/non-repeating-character/0
#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	std::vector<int> v(26,0);
    	for(int i=0;i<n;i++)
    	{
    		if(v[s[i]-'a']==0)
    			v[s[i]-'a']=1;
    		else if(v[s[i]-'a']==1||v[s[i]-'a']==-1)
    			v[s[i]-'a']=-1;
    	}
    	int i;
    	for(i=0;i<n;i++)
    	{
    		if(v[s[i]-'a']==1)
    		{
    			cout<<s[i]<<endl;
    			break;
    		}
    	}
    	if(i==n)
    		cout<<-1<<endl;
    }

    return 0;

}