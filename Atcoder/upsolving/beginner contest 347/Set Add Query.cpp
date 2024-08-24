#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,q;cin>>n>>q;
    set<int>st;
    vector<ll>val(n+1,0);
    int x;
    ll currSum=0;
    map<int,ll>mp;
    while (q--)
    {
        cin>>x;
        if(st.count(x)) 
        {
            st.erase(x);
            val[x]+=currSum-mp[x];
        }
        else 
        {
            st.insert(x);
            mp[x]=currSum;
        }
        currSum+=st.size();
    }
    for(auto it:st) 
    {
        val[it]+=currSum-mp[it];
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<val[i]<<" \n"[i==n];
    }
}
