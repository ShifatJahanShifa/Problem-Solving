#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,q;cin>>n>>q;
    vector<ll>v(n+2,0);
    ll x;int l,r;
    while (q--)
    {
        cin>>l>>r>>x;
        v[l]+=x;
        v[r+1]-=x;
    }
    for (int i = 1; i <=n; i++)
    {
        v[i]+=v[i-1];
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<v[i]<<" \n"[i==n];
    }
    puts("");
}
