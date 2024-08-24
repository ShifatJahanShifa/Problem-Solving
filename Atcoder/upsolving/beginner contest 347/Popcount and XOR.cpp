#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int mod = 1e9 + 7;

int main()
{
    int a,b; ll c;cin>>a>>b>>c;
    int setbit=__builtin_popcountll(c);
    // four cases not to have answer
    int d=a+b-setbit;
    if((a+b)<setbit or (d%2)!=0 or ((d/2)>min(a,b)) or (d/2 + setbit)>60) 
    {
        cout<<"-1\n";
    }
    else 
    {
        int x=a-d/2;
        int y=b-d/2;
        int z=d/2;
        ll X=0,Y=0;
        for (int i = 0; i <60; i++)
        {
            if((c>>i)&1) 
            {
                if(x>0) 
                {
                    X|=(1LL<<i);
                    x--;
                }
                else if(y>0)
                {
                    Y|=(1LL<<i);
                    y--;
                }
            }
            else 
            {
                if(z>0){
                X|=(1LL<<i);
                Y|=(1LL<<i);
                z--;
                }
            }
        }
        cout<<X<<" "<<Y<<"\n";
    }
}
