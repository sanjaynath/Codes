#include<bits/stdc++.h>
using namespace std;
 
 
vector<int> root,h;
 
int f(int x)
{
    if(root[x]==x)
        return x;
    return f(root[x]);
}
 
void u(int x,int y)
{
    int a=root[x];
    int b=root[y];
    root[b]=a;
}
 
int main()
{
    int n;
    cin>>n;
 
    for(int i=0;i<=n;i++)
    {    
        root.push_back(i);
        h.push_back(0);
    }
    int i=2;
    while(i<=n)
    {
        char c;
        cin>>c;
        if(c=='J')
        {
            int x;
            cin>>x;
            if(f(x)!=f(i))
                u(x,i);
        }
        i++;
    }
    for(int i=1;i<=n;i++)
        h[root[i]]++;
 
    /*for(int i=1;i<=n;i++)
    {
        cout<<h[root[i]]<<" ";
    }*/
 
    for(int i=1;i<=n;i++)
    {
        h[root[i]]--;
        cout<<h[root[i]]<<" ";
    }
 
}