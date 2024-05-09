#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ca=0,a=0,b=0;
        ll ans=0;
        for (int i = 0; i <n; i++)
        {
            if(s[i]=='a') 
            {
                ca++;
            }
            else if(s[i]=='b')
            {
                b=1;
                a+=ca;ca=0;
            }
            else 
            {
                if(b==1) 
                {
                    if(a==0) 
                    {
                        b=0;continue;
                    }
                    else 
                    {
                        a--;ans++;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    
}
