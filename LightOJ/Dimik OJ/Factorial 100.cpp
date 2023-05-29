#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        if(N==0) puts("1");
        else 
        {
            int cnt=N/10;
            cnt*=2;
            if(N%10>4) cnt++;
            cnt+=(N/25);
            cout<<cnt<<"\n";
        }
    }
}
