#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

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

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n; cin>>n;
        ll ans=0;
        for (ll i = 2; i <=n; i++)
        {
            ll temp=1;
            temp*=BE(2LL,n-i);
            temp%=mod;
            temp*=(i-1LL);
            temp%=mod;
            temp*=(i-1LL);
            temp%=mod;
            temp=(temp*(n-i+1LL))%mod;
            ans+=temp;
            ans%=mod;
        }
        ans=(ans*2LL)%mod;
        cout<<ans<<"\n";
    }
    
}
