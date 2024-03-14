#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    ll ans=0;
    for (int i = 1; i <n; i++)
    {
        if(v[i]<v[i-1]){
        ans+=v[i-1]-v[i];
        v[i]=v[i-1];
        }
    }
    cout<<ans<<"\n";
    
}
