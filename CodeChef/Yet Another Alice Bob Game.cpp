#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int T;cin>>T;
	while(T--)
	{
	    ll n,a,b;cin>>n>>a>>b;
	    if(a>=n) cout<<"Alice\n";
        else if(a>b) cout<<"Alice\n";
        else if(a<b) cout<<"Bob\n";
        else 
        {
            if(n%(a+1)==0) 
            cout<<"Bob\n";
            else cout<<"Alice\n";
        }
        
	}

}
