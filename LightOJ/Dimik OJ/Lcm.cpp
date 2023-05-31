#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        long long a,b;
        cin>>a>>b;
        long long gcd=__gcd(a,b);
        long long multiply=a*b;
        long long ans=multiply/gcd;
        cout<<"LCM = "<<ans<<"\n";
    }
}
