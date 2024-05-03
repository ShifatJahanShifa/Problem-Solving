#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T,k=1;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n),b(n),c(n);
        for(auto &it:v) cin>>it;
        b[0]=0;
        c[0]=v[0];
        for (int i = 1; i <n; i++)
        {
            c[i]=c[i-1]|v[i];
            b[i]=v[i]^c[i];
        }
        cout<<"Game #"<<k<<"\n";
        k++;
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" \n"[i==n-1];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" \n"[i==n-1];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<c[i]<<" \n"[i==n-1];
        }
    }
} 
