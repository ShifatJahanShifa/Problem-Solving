#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const long long MOD=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,q;cin>>n>>q;
        vector<ll>v(n),pre(n+1,0);
        for(auto &it:v) cin>>it;
        // precalculation part
        multiset<ll>mini,maxi;
        ll minSum=0,maxSum=0;
        for (int i = 0; i <n; i++)
        {
            // whichever comes, insert it in the first set
            mini.insert(v[i]);
            minSum+=v[i];

            // two cases to consider
            while (mini.size()>=maxi.size())
            {
                ll x=*mini.rbegin();
                maxi.insert(x);
                minSum-=x;
                maxSum+=x;
                mini.erase(mini.find(x));
            }
            while (mini.size() and maxi.size() and *mini.rbegin()>*maxi.begin())
            {
                ll x1=*mini.rbegin();
                ll x2=*maxi.begin();
                mini.erase(mini.find(x1));
                maxi.erase(maxi.find(x2));
                mini.insert(x2);
                maxi.insert(x1);
                minSum+=x2-x1;
                maxSum+=x1-x2;
            }
            pre[i+1]=maxSum-minSum;
        }
        int a;
        while (q--)
        {
            cin>>a;
            cout<<pre[a]<<" ";
        }
        cout<<"\n";
    }
    
}
