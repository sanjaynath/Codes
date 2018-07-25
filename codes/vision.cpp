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

bool check(lli x1,lli y1,lli z1,lli x2,lli y2,lli z2,lli x3,lli y3,lli z3,lli r)
{
	lli a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1);
	lli b= 2*((x2 - x1)*(x1 - x3) + (y2 - y1)*(y1 - y3) + (z2 - z1)*(z1 - z3));
	lli c = x3*x3 + y3*y3 + z3*z3 + x1*x1 + y1*y1 + z1*z1 -2*(x3*x1 + y3*y1 + z3*z1) - r*r;
	lli d = b*b - 4*a*c;

	//cout<<"d="<<d<<endl;
	if(d<=0)
		return true;
	return false;
}
int main()
{
    speed;

    lli T;
    cin>>T;
    while(T--)
    {
    	lli px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
    	cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;

    	lli t=0;
    	bool flag=false;
    	while(!flag)
    	{
    		lli x2=qx+dx*t;
    		lli y2=qy+dy*t;
    		lli z2=qz+dz*t;

    		//cout<<"t="<<t<<" ";
    		if(check(px,py,pz,x2,y2,z2,cx,cy,cz,r))
    			flag=true;


    		t++;
    	}
    	t--;
    	//cout<<t<<endl;
    	printf("%.10lf\n",(double)t );

    }

    return 0;

}








