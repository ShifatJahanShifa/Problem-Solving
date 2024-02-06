#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() // bs
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int v=abs(x1-x2);
    int d=v1-v2;
    if(d==0) cout<<"NO\n";
    else if(d<0 or v%d!=0) cout<<"NO\n";
    else cout<<"YES\n";
}
