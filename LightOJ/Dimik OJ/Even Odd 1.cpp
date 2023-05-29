#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n; cin>>T;
    while(T--)
    {
        cin>>n;
        if(n&1) puts("odd");
        else puts("even");
    }
}
