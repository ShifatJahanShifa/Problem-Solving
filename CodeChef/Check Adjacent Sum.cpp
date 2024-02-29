#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int T;cin>>T;
	while(T--)
	{
	    int n,q;cin>>n>>q;
	    vector<ll>v(n);
	    for(auto &it:v) cin>>it;
	    sort(v.begin(),v.end());
        ll cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        cnt+=(v[i]*2);
	    }
        map<ll,pair<int,int>>mpp;
        for (int i = 0; i <n; i++)
        {
            for (int j = i+1; j<n; j++)
            {
                mpp[cnt-v[i]-v[j]]=make_pair(i,j);
            }
        }
        ll x;
        while (q--)
        {
            cin>>x;
            if(mpp.find(x)!=mpp.end()) 
            {
                cout<<v[mpp[x].first]<<" ";
                for (int i = 0; i <n; i++)
                {
                    if(i!=mpp[x].first and i!=mpp[x].second)
                    {
                        cout<<v[i]<<" ";
                    }
                }
                cout<<v[mpp[x].second]<<"\n";
            }
            else 
            {
                cout<<"-1\n";
            }
        }
	}
}
