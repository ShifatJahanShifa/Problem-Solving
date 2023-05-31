#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        double X;cin>>X;
        int count=0;
        while(X>1.00)
        {
            X/=2.0;
            count++;
        }
        cout<<count<<" days\n";
    }
}
