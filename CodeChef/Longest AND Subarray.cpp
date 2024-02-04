#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nearest(int n)
{
    int ret=1,iter=1;
    while (ret<n)
    {
        ret=1<<iter;
        iter++;
    }
    ret>>=1;
    return ret;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if(n&(n-1)) 
        {
            int v1=nearest(n);
            int v2=v1>>1;
            int ans=max((v1-v2),(n-v1+1));
            cout<<ans<<"\n";
        }
        else 
        {
            cout<<n-(n>>1)<<"\n";
        }
    }
}
