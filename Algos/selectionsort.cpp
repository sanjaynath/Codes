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

vector<int> selection_sort(vector<int> a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min_i=i;

		for(j=i+1;j<n;j++)
			if(a[j]<a[min_i])
				min_i=j;

		int temp=a[min_i];
		a[min_i]=a[i];
		a[i]=temp;
		print(a);
	}
	return a;
}

int main()
{
    speed;

    int n;
    cin>>n;
    vector<int> a(n);
    input(a,n);
    a=selection_sort(a,n);
    print(a);



    return 0;
}