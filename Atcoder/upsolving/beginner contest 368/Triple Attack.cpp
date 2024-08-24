#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,a; cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll ans=0;
    ll t=0;
    for (int i = 0; i <n; i++)
    {
        ll baad=0;
        if((ans+1LL)%3LL==1)
        {
            baad=0;
        }
        else if((ans+1LL)%3LL==2) 
        {
            baad=4;
        }
        else 
        {
            baad=3;
        }
        ll m=min(baad,v[i]);
        v[i]-=m;
        if(baad==3) 
        {
            ans++;
        }
        else if(baad==4) 
        {
            if(m>1) ans+=2;
            else ans++;
        }

        t=(v[i]/5LL);
        ans+=(t*3LL);
        ll d=(v[i]-(t*5LL));
        if(d) 
        {
            if(d>2) ans+=3;
            else ans+=d;
        }
        // cout<<ans<<" t\n";
    
    }
    cout<<ans<<"\n";
}
