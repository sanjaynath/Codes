#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int n; 
    cin>>n;
    std::vector<int> v;
    std::vector<bool> visited(n+1,false);
    int m=n;
    v.push_back(0);
    while(m--)
    {
    	int a;
    	cin>>a;
    	v.push_back(a);
    }
    int count=0;
    std::vector<vector<int>> ans;
    for(int i=1;i<=n;i++)
    {
    	std::vector<int> a;
    	if(!visited[i])
    	{
    		count++;
    		int j=i;
    		while(!visited[j])
    		{
    			//cout<<j<<" ";
    			a.push_back(j);

    			visited[j]=true;
    			j=v[j];
    		}
    		a.push_back(j);
    		//cout<<j<<endl;
    	}
    	ans.push_back(a);
    }

    cout<<count<<endl;
    for(int i=0;i<ans.size();i++)
    {
    	for(int j=0;j<ans[i].size();j++)
    		cout<<ans[i][j]<<" ";
    	cout<<endl;
    }

    return 0;

}