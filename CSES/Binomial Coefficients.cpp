#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000000007;
vector<ll>fact(200005,1);

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

void factorial()
{
    for (ll i = 2; i <200005; i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}

int main()
{
    // cout<<BE(2LL,4LL)<<"\n";
    factorial();

    int T;cin>>T;
    while (T--)
    {
        ll a,b;cin>>a>>b;
        ll x=fact[a];
        ll y=fact[b];
        ll z=fact[a-b];
        // cout<<x<<" "<<y<<" "<<z<<"\n";
        ll p=(y*z)%mod;
        ll inv=BE(p,1000000005);
        ll ans=(x*inv)%mod;
        cout<<ans<<"\n";
    }
    
}

// 3
// 5 3
// 8 1
// 9 5
