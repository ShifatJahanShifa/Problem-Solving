#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        if(N==0) puts("1");
        else if(N==1){
            puts("2 + 1");       
        }
        else{
        for(int i=N;i>1;i--)
        {
            cout<<"2^"<<i<<" + ";
        }
        cout<<2<<" + 1\n";
        }
    }
}
