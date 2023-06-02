#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<i;j++)
            {
                cout<<m<<" ";
            }
            cout<<m<<"\n";
        }
        for(int i=1;i<n;i++)
        {
            cout<<m<<" ";
        }
        cout<<m<<"\n";
        for(int i=n-1;i>0;i--)
        {
            for(int j=1;j<i;j++)
            {
                cout<<m<<" ";
            }
            cout<<m<<"\n";
        }
        puts("");
    }
}
