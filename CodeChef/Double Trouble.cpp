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
        int n; ll k;cin>>n>>k;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>>pq;
        int idx=0;
        for (int i = 0; i <n; i++)
        {
            pq.push(make_pair(v[i],i));
        }
        while (k>0 and idx<n-1)
        {
            auto p=pq.top();
            pq.pop();
            idx=p.second;
            ll f=p.first*2LL;
            pq.push(make_pair(f,idx));
            k--;
        }
        ll div=k/n;
        int rem=k%n; 
        ll ans=0;
        vector<ll>eq;
        while (!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            eq.push_back(p.first);
        }
        sort(eq.begin(),eq.end());
        ll mul=BE(2LL,div);
        for (int i = 0; i <n; i++)
        {
            eq[i]=(eq[i]*mul)%mod;
        }
        for (int i = 0; i <rem; i++)
        {
           eq [i]=(eq[i]*2LL)%mod;
        }
        for (int i = 0; i <n; i++)
        {
            ans=(eq[i]+ans)%mod;
        }
        cout<<ans<<"\n";
    }
}

