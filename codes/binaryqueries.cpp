#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(q--)
    {
        int p;
        cin>>p;
        {
            int l,r;
            cin>>l>>r;
            if(a[r-1]==1)
                cout<<"ODD"<<endl;
            else
                cout<<"EVEN"<<endl;
        }
        else
        {
            int x;
            cin>>x;
            if(a[x-1]==0)
                a[x-1]=1;
            else
                a[x-1]=0;
        }

    }
    return 0;
}
