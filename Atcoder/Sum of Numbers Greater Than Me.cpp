#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<ll>v(n),another(n),suffix(n+1);
    for(auto &it:v) cin>>it;
    another=v;
    sort(another.begin(),another.end());
    suffix[n-1]=another[n-1];
    suffix[n]=0;
    for (int i = n-2; i>-1; i--)
    {
        suffix[i]=suffix[i+1]+another[i];
    }
    for (int i = 0; i <n; i++)
    {
        int pos=upper_bound(another.begin(),another.end(),v[i])-another.begin();
        cout<<suffix[pos]<<" ";
    }
    cout<<"\n";
}
