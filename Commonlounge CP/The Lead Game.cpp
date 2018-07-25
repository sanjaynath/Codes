#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)

int main()
{
    speed;

    int t;
    cin>>t;
    int max=INT_MIN, leada=0,leadb=0,lead=0,leader,scorea=0,scoreb=0;
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    	scorea+=a;
    	scoreb+=b;
    
    	lead=abs(scoreb-scorea);
    	if(lead>max)
    	{
    		max=lead;
    		if(a>b)
    			leader=1;
    		else
    			leader=2;
    	}

    }
    
    cout<<leader<<" "<<max; 

    return 0;

}