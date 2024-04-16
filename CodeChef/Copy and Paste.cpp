#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
	int T;cin>>T;
	while(T--)
	{
	    ll n,m,sz;cin>>n>>m;
	    string a,s="";cin>>a;
	    sz=0;
	    for(int i=0;i<n;i++)
	    {
	        sz+=a[i]-'0';
	    }
	    if(sz==0) 
	    {
	        cout<<n*m<<"\n";
	        continue;
	    }
	    if(m&1LL) s=a;
	    else s=a+a,n+=n;
        
	    ll pre[n+1],suf[n+1];
        for(int i=0;i<=n;i++) 
        {
            pre[i]=0;
            suf[i]=0;
        }
        
        for(int i=0;i<n;i++) 
        {
            pre[i+1]=pre[i]+(s[i]=='1');
        }
        for(int i=n-1;i>-1;i--) 
        {
            suf[i]=suf[i+1]+(s[i]=='1');
        }
        
        int ans=0;
        for(int i=1;i<=n;i++) 
        {
            if(pre[i]==suf[i]) ans++;
        }
        
        cout<<ans<<"\n";
	}

}
