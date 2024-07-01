#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
vector<ll>fact(100005,1LL);

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

void factorial()
{
    for (ll i = 2; i < 100005; i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}

int main()
{
    factorial();
    int T;cin>>T;
    while (T--)
    {
        ll n,k;cin>>n>>k;
        cout<<(ncr(k,n)*fact[n])%mod<<"\n";
    }
    
}

