#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;cin>>a>>b>>c;
  if(b<=c)
  {
    if(a>=b and a<=c) cout<<"No\n";
    else cout<<"Yes\n";
  }
  else 
  {
    if(a>=b or a<=c) cout<<"No\n";
    else cout<<"Yes\n";
  }
}
