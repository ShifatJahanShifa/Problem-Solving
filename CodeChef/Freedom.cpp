#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n),even;
        for(auto &it:v) cin>>it;
        ll ans=0;
        map<ll,ll>mp;
        mp[v[0]]++;
        for (int i =1; i <n; i++)
        {
            if(v[i]>1 and ((3LL*v[i])%(v[i]-1))==0)
            {
                ll temp=(3LL*v[i])/(v[i]-1);
                ans+=mp[temp];
            }
            mp[v[i]]++;
        }
        cout<<ans<<"\n";
    }
    
}
