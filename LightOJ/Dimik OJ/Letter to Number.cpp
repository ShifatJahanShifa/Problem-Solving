#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    getchar();
    while(T--)
    {
        string s;cin>>s;
        int v;
        for(int i=0;i<s.size();i++)
        {
            v=s[i]-'A'+1;
            cout<<v;
        }
        puts("");
    }
}
