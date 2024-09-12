#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

// ll BE(ll a,ll b) 
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }
vector<ll>v(200005);
vector<vector<int>>graph;

ll solve(int u)
{
    ll mini=LLONG_MAX;
    for(auto vv:graph[u]) 
    {
        mini=min(mini,solve(vv));
    }
    if(u==1) return mini;
    if(mini==LLONG_MAX) return v[u];
    if(mini<=v[u]) return mini;
    ll mid=v[u]+(mini-v[u])/2LL;
    ll dif=mid-v[u];
    mini-=dif;
    mini=min(mini,mid);
    return mini;
}

int main()
{
    // cout<<"HELLO\n";
    int T;cin>>T;
    while (T--)
    {
        int n,q; cin>>n;
        vector<long double>v(n),s(n);
        for(auto &it:v) cin>>it;
        for(auto &it:s) cin>>it;
        vector<pair<long double,long double>>vp;
        for (int i = 0; i <n; i++)
        {
            vp.push_back(make_pair(v[i],s[i]));
        }
        sort(vp.begin(),vp.end());
        long double db=1.0*(1e9+5.0);
        int ans=0;
        for (int i = n-1; i>-1; i--)
        {
            long double temp=(vp[i].first/vp[i].second);
            if(temp<=db) 
            {
                db=temp;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    
}
