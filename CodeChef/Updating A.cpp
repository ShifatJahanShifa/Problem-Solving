#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(auto &it:v) cin>>it;
        ll maxi=0,temp=0,sum=0;
        for (int i = 0; i <n; i++)
        {
            sum+=v[i];
        }
        // kadane's algo for substring with minimum sum
        temp=v[0];
        for (int i = 1; i <n; i++)
        {
            temp+=v[i];
            maxi=min(maxi,temp);
            temp=min(temp,v[i]);
        }
        
        sum+=(abs(maxi)*2LL);
        cout<<sum<<"\n";
    }
} 
