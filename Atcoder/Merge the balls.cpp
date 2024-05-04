#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    stack<ll>stk;
    for (int i = 0; i <n; i++)
    {
        stk.push(v[i]);
        while (stk.size()>1)
        {
            ll right=stk.top();
            stk.pop();
            ll scndright=stk.top();
            stk.pop();
            if(right!=scndright) 
            {
                stk.push(scndright);
                stk.push(right);
                break;
            }
            stk.push(right+1LL);
        }
    }
    cout<<stk.size()<<"\n";
    
} 
