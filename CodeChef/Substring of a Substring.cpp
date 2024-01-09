#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;cin>>T;
    while(T--)
    {
        string s;cin>>s;
        int n=s.size();
        if(n==1 or n==2) cout<<"-1\n";
        else 
        {
            char first=s[0],last=s[n-1];
            int temp=0,ans=0;
            for(int i=1;i<n-1;i++)
            {
                if(s[i]==first or s[i]==last) 
                {
                    ans=max(ans,temp);
                    temp=0;
                }
                else
                {
                    temp++;   
                }
            }
            ans=max(ans,temp);
            ans==0 ? cout<<"-1\n" : cout<<ans<<"\n";
        }
    }
}
