#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        ll n,m;cin>>n;
        vector<ll>a(n),onepre(n+1);
        for(auto &it:a) cin>>it;
        ll maxi=*max_element(a.begin(),a.end());
        ll ans=0;
        for (int i = 0; i <n; i++)
        {
            if(a[i]==1) 
            {
                ans+=n;
                continue;
            }
            for (int j = 1;j<=n; j++)
            {
                ll temp=pow(a[i],j);
                if(temp>maxi) break;
                if(temp<=a[j-1]) ans++;
            }
            
        }
        cout<<ans<<"\n";
    }
    
}
