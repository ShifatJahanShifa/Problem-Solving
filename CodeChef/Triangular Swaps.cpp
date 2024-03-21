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
        int ans=n-2,i;
        int mark=0;
        for (i = 0; i <n-2; i++)
        {
            int a=i,b=i+1,c=i+2,d=i+3;
            if(s[a]==s[b] and s[b]==s[c]) 
            {
                mark=1;
                ans--;
            }
            else if(d<n and s[a]==s[b] and s[b]==s[d] and s[b]!=s[c]) 
            {
                ans--;
            }
        }
        cout<<ans+mark<<"\n";
    }   
}
