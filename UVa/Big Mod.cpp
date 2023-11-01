#include<bits/stdc++.h>
using namespace std;

int BigMod(int b,int p,int m)
{
    if(p==0) return 1;
    if(p&1)
    {
        int v1=(b%m);
        int v2=BigMod(b,p-1,m)%m;
        return (v1*v2)%m;
    }
    else
    {
        int v1=BigMod(b,p/2,m)%m;
        return (v1*v1)%m;
    }
}

int main()
{
    int b,p,m;
    while(cin>>b>>p>>m)
    {
        int ans=BigMod(b,p,m);
        cout<<ans<<"\n";
        getchar();
    }
}
