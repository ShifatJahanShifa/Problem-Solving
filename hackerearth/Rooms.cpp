#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>a(n),s(n);
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i <n; i++)
        {
            cin>>s[i];
        }
        for (int i = 0; i <n; i++)
        {
            s[i]+=a[i];
        }
        map<int,int>mp;
        int cnt=0,ans=INT_MIN;
        for (int i = 0; i <n; i++)
        {
            mp[a[i]]++;
            mp[s[i]]--;
        }
        for(auto it:mp)
        {
            cnt+=it.second;
            ans=max(cnt,ans);
        }
        cout<<ans<<"\n";
    }
}
