#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1e9+7;
vector<int>SPF(1000002);
vector<ll>storeSum(1000002);

void sieve2(int n) 
{
    SPF.clear();
    for (int i = 2; i <=n; i++)
    {
        SPF[i]=i;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if(SPF[i]!=i) continue;
        for (int j =i*i; j <=n; j+=i)
        {
            if(SPF[j]!=j) continue;
            SPF[j]=i;
        }
    }
    ll sum=0;
    for (int i = 2; i<n; i++)
    {
        if(SPF[i]==i) sum+=(i*1LL);
        storeSum[i]=sum;
    }
}

int main()
{
    sieve2(1000002);
    int T;
    cin>>T;
    while (T--)
    {
        ll n;cin>>n;
        ll ans=0;
        ll chng=n;
        if(n!=SPF[n]) 
        {
            chng=SPF[n];
        }
        ans=n*storeSum[chng];  
        cout<<ans<<"\n";
    }
     
}
