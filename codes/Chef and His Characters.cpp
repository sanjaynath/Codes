#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ull unsigned long long
#define speed ios_base::sync_with_stdio(0)
#define	all(v)	v.begin(),v.end()
#define maxi(v) max_element(all(v))-v.begin()
#define mini(v) min_element(all(v))-v.begin()
#define max(v) v[maxi(v)]
#define min(v) v[mini[v]]
#define find(v,n) find(all(v),n)

void input(vector<int> &v,int n) { for(int i=0;i<n;i++) cin>>v[i]; }
void print(vector<int> &v) { for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl; }


bool check(vector<int> &a)
{
	if(a[2]>0&&a[4]>0&&a[5]>0&&a[7]>0)
		return true;
	else
		return false;
}
int main()
{
    speed;

    int t;
    cin>>t;
    while(t--)
    {
    	vector<int> alph(26,0);
    	lli tot=0;
    	string s;
    	cin>>s;
    	queue<char> q;
    	lli i=0;
    	while(i<s.length())							
    	{
    		if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f')
    		{
    			
																									
    			q.push(s[i]);
    			if(q.size()>4)
    			{
    				char c=q.front();
    				alph[c-'a']--;
    				q.pop();
    			}
    			alph[s[i]-'a']++;

    			if(q.size()==4&&check(alph))
    				tot++;
    			/*else if(q.size()==4)
    			{
    				queue<char> empty;
    				swap(q,empty);
    			}*/

    		}
    		else
    		{
    			queue<char> empty;
    			vector<int> fls(26,0);
    			swap(alph,fls);
    			swap(q,empty);
    		}
    		//cout<<s[i]<<" "<<alph[2]<<" "<<alph[7]<<" "<<alph[4]<<" "<<alph[5]<<"  "<<tot<<"size= "<<q.size()<<endl;
    		i++;

    	}
    	if(tot)
    		cout<<"lovely "<<tot<<endl;
    	else
    		cout<<"normal\n";
    }

    return 0;
}
