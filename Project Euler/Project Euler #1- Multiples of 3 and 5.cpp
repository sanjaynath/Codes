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
    	lli tot=0;
    	n--;
    	lli q3=n/3;
    	lli q5=n/5;
    	lli q15=n/15;
    	tot=3*((q3*(q3+1))/2)+5*((q5*(q5+1))/2)-15*((q15*(q15+1))/2);

 		cout<<tot<<endl;

    }

    return 0;

}