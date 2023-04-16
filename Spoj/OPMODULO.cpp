problem link: https://www.spoj.com/problems/OPMODULO/

                                                my solution 
----------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std; 

long long int total(long long int l,long long int r)
{
    long long int ans=0,n=1;
    while(n<l)
    {
        n*=2;
    }
    while (n<=r)
    {
        ans+=n;
        n*=2;
    }
    return ans;
}

int main()
{
    long long int l,r;
    cin>>l>>r;
    cout<<total(l,r);
}
