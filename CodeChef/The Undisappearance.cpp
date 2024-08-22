#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(auto &it:a) cin>>it;
        map<int,vector<int>>mpv;
        for (int i = 0; i <n; i++)
        {
            mpv[a[i]].push_back(i);
        }
        ll ans=0;
        for(auto it:mpv) 
        {
            auto v=it.second;
            int f=v[0],l=v[v.size()-1];
            if(it.first==1) 
            {
                auto b=mpv[3];
                int idx=upper_bound(b.begin(),b.end(),f)-b.begin();
                if((idx==b.size() or b[idx]>l)) 
                {
                    int low=0;
                    ll h=n-l;
                    if(idx!=0) 
                    {
                        low=b[idx-1];
                        low++;
                    }
                    if(idx!=b.size()) 
                    {
                        h=b[idx]-l;
                    }
                    ans+=((f-low+1LL)*(h));
                }
            }
            else 
            {
                auto b=mpv[it.first-1];
                int idx=upper_bound(b.begin(),b.end(),f)-b.begin();
                if((idx==b.size() or b[idx]>l)) 
                {
                    int low=0;
                    ll h=n-l;
                    if(idx!=0) 
                    {
                        low=b[idx-1];
                        low++;
                    }
                    if(idx!=b.size()) 
                    {
                        h=b[idx]-l;
                    }
                    ans+=((f-low+1LL)*(h));
                }
            }
        }
        ll cnt=(n*(n+1LL))/2LL;
        cout<<cnt-ans<<"\n";
    }
}


