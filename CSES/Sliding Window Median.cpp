#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const long long MOD=1e9+7;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), ans;
    for (auto &it : v)
        cin >> it;

    // case 1
    if(k==1) 
    {for(auto it:v) cout<<it<<" "; cout<<"\n"; return 0;}

    if(k==2) 
    {
        for (int i = 0; i <n-1; i++)
        {
            cout<<min(v[i],v[i+1])<<" ";
        }
        cout<<"\n"; return 0;
    }
    // precalculation part
    multiset<pair<int,int>> mini, maxi;
    vector<pair<int,int>>vp;
    for (int i = 0; i <k; i++)
    {
        vp.push_back(make_pair(v[i],i));   
    }
    sort(vp.begin(),vp.end());
    for (int i = 0; i <(k/2)+(k%2); i++)
    {
        mini.insert(vp[i]);
    }
    for (int i =(k/2)+(k%2);i<k; i++)
    {
        maxi.insert(vp[i]);
    }
    auto it=*mini.rbegin();
    cout<<it.first<<" ";
    for (int i = k; i <n; i++)
    {
        // delete 
        if(mini.count(make_pair(v[i-k],i-k))) mini.erase(make_pair(v[i-k],i-k));
        else maxi.erase(make_pair(v[i-k],i-k));

        // add
        if(*(mini.rbegin())<make_pair(v[i],i)) maxi.insert(make_pair(v[i],i));
        else mini.insert(make_pair(v[i],i));

        // balancing 
        while(mini.size()<((k/2)+k%2)) 
        {
            auto it=*maxi.begin();
            maxi.erase(it);
            mini.insert(it);
        }
        while(mini.size()>((k/2)+k%2)) 
        {
            auto it=*mini.rbegin();
            mini.erase(it);
            maxi.insert(it);
        }
        cout<<(*mini.rbegin()).first<<" ";
    }
    cout<<"\n";
}
