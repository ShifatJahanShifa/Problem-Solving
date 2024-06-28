#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;

ll BE(ll a,ll b)
{
    ll ans=1LL;
    while(b)
    {
        if(b%2LL) ans*=a;
        ans%=mod;
        a*=a;
        a%=mod;
        b/=2LL;
    }
    return ans;
}


ll finalRes(ll a,ll b)
{
    if(a>=b) return (a-b)%mod;
    else return (mod+mod+a-b)%mod;
}

ll ncr(ll n,ll r)
{
    ll ans=1LL;
    for (ll i = 0; i <r; i++)
    {
        ans=(ans*(n-i))%mod;
        ans=(ans*BE(i+1LL,mod-2LL))%mod;
    }
    return ans;
}

int main()
{
    ll n,a,b;cin>>n>>a>>b;
    cout<<finalRes(BE(2LL,n),ncr(n,a)+ncr(n,b)+1LL)<<"\n";
}

//mod-(b-a)
