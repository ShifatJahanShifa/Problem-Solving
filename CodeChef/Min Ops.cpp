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


int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,q; cin>>n>>q;
        vector<ll>v(n),pre(n,0);
        for(ll &it:v) cin>>it;
        for (int i = 1; i <n; i++)
        {
            pre[i]=pre[i-1]+(abs(v[i]-v[i-1]));
        }
        // for (int i = 0; i <n; i++)
        // {
        //     cout<<pre[i]<<" \n"[i==n-1];
        // }
        
        int l,r; ll k;
        for (int i = 0; i <q; i++)
        {
            cin>>l>>r>>k;
            ll d=pre[r-1]-pre[l-1];
            ll dif=abs(v[r-1]-v[l-1]);
            if(d<=k) cout<<"0\n";
            else if(dif<=k) 
            {
                ll oper=(d-k)/2;
                if((d-k)%2) oper++;
                cout<<oper<<"\n";
            }
            else 
            {
                ll oper=(d-dif)/2;
                oper+=abs(k-dif);
                cout<<oper<<"\n";
            }
        }
        
    }
    
}
