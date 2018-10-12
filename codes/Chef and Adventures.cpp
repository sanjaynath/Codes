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
    	int n,m,x,y;
    	cin>>n>>m>>x>>y;
    	int a=n-1;
    	int b=m-1;
    	if(((a%x==1 || x==1) && (b%y==1||y==1) && a!=0 && b!=0 )|| ((a%x==0)&&(b%y==0)))
    		cout<<"Chefirnemo\n";
    	else
    		cout<<"Pofik\n";
    }

    return 0;

}