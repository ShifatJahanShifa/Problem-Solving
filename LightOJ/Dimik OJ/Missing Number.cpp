#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        long long N,a;cin>>N;
        long long total=(N*(N+1))/2;
        for(int i=1;i<N;i++)
        {
            cin>>a;
            total-=a;
        }
        cout<<total<<"\n";
    }
}
