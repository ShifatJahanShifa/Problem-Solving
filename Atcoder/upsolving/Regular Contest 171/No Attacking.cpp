#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() // bs
{
    int T;cin>>T;
    while (T--)
    {
        ll n,a,b;cin>>n>>a>>b;
        if(a>n) puts("No");
        else 
        {
            ll remain=n-a;
            ll p=((n+1)/2);
            ll row=min(remain,p);
            if((row*remain)<b) puts("No");
            else puts("Yes");
        }
    }
    
}
