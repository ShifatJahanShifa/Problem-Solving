#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m;
    cin>>n>>m;
    int d,r;
    vector<vector<int>>v(m);
    for (int i = 0; i <n; i++)
    {
        cin>>d>>r;
        if((m-d)>=0) v[(m-d)].push_back(r);
    }
    priority_queue<int>pq;
    int ans=0;
    for (int i = m-1; i>-1; i--)
    {
        for(auto it:v[i]) 
        {
            pq.push(it);
        }
        if(!pq.empty()) 
        {
            ans+=pq.top();
            pq.pop();
        }
    }
    cout<<ans<<"\n";
}
