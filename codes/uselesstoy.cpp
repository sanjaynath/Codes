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

int main()


	char beg,end;
	cin>>beg>>end;
	int n,i,j,flag1=0,flag2=0;
	cin>>n;
	string s="v<^>v<^>v<^>";
	int k=n%4;
	for(i=4;i<8;i++)
	{
		if(s[i]==beg)
		{
			j=i;
			break;
		}
	}
    cout<<s[j]<<endl;
	if(s[j+k]==end)
		flag1=1;
	if(s[j-k]==end)
		flag2=1;
	if(flag1==1&&flag2==1)
		cout<<"undefined\n";
	else if(flag1==1)
			cout<<"cw\n";
	else
		cout<<"ccw\n";


    return 0;
}
