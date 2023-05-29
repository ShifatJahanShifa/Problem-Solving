#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        string N;cin>>N;
        int a,b;
        a=N[0]-'0';
        b=N[4]-'0';
        cout<<"Sum = "<<a+b<<"\n";
    }
}
