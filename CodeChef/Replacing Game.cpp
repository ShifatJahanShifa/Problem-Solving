#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// const ll mod=1000000007;
// ll BE(ll a,ll b) 
// {
//     ll ans=1LL;
//     while(b)
//     {
//         if(b%2LL) ans*=a;
//         ans%=mod;
//         a*=a;
//         a%=mod;
//         b/=2LL;
//     }
//     return ans;
// }

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n,k;cin>>n>>k;
        string a,b;cin>>a>>b;
        if(a==b) 
        {
            cout<<"0\n";
            continue;
        }
        vector<int>trans;
        vector<char>ch;
        int s=-1,e=-1,cnt=1;
        for (int i = 1; i <n; i++)
        {
            while(b[i]==b[i-1]) 
            {
                cnt++;
                if(cnt==k) 
                {
                    e=i;
                    s=i-k+1;
                    break;
                }
                i++;
            }
            cnt=1;
        }
        if(e==-1) 
        {
            cout<<"-1\n";
            continue;
        }
        for (int i = 0; i <s; i++)
        {
            a[i]=b[i];
            trans.push_back(i+1);
            ch.push_back(b[i]);
        }
        for (int i = n-1; i>e; i--)
        {
            a[i]=b[i];
            trans.push_back(i-k+2);
            ch.push_back(b[i]);
        }
        trans.push_back(s+1);
        ch.push_back(b[s]);
        cout<<trans.size()<<"\n";
        for (int i = 0; i <trans.size(); i++)
        {
            cout<<trans[i]<<" "<<ch[i]<<"\n";
        }
    }
}
