#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define speed ios_base::sync_with_stdio(0)
bool isvow(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		return true;
	return false;
}
int main()
{
    speed;

    string s;
    cin>>s;
    bool flag=true;
    int n=s.length();
    if(!isvow(s[n-1]) && s[n-1]!='n')
    	flag=false;
    else
    {
    	for(int i=0;i<n;i++)
	    {
	    	if(!isvow(s[i]) && s[i]!='n' && !isvow(s[i+1]))
	    		flag=false;
	    }	
    }
    if(flag)
    	cout<<"YES";
    else
    	cout<<"NO";    

    return 0;

}