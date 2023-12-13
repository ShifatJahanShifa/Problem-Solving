#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,t=1,m;
    while (cin>>n>>q)
    {
        if(n==0 and q==0) break;
        vector<int>v(n);
        for(auto &it:v) cin>>it;   
        sort(v.begin(),v.end());
        cout<<"CASE# "<<t<<":\n";
        t++;
        for (int i = 0; i <q; i++)
        {
            cin>>m;
            int pos=lower_bound(v.begin(),v.end(),m)-v.begin();
            if(v[pos]==m) cout<<m<<" found at "<<pos+1<<"\n";
            else cout<<m<<" not found"<<"\n";
        }
    }
}
