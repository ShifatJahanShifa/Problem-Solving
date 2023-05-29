#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        string s;cin>>s;
        int n=s.size();
        int check=s[n-1]-'0';
        if(check&1) puts("odd");
        else puts("even");
    }
}
