#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int>&a, const pair<int,int>&b)
{
    if(a.first>b.first) return true;
    else if(a.first==b.first and a.second<b.second) return true;
    return false;
}

int main()
{
    int n,m;
    cin >> n>>m ;
    int point[m];
    for (int i = 0; i <m; i++)
    {
        cin>>point[i];
    }
    vector<int>totalP(n);
    vector<vector<int>>vp(n);
    int maxP=-1;
    for (int i = 0; i <n; i++)
    {
        string s;cin>>s;
        int p=i+1;
       // vp[i].push_back(0);
        for (int j = 0; j<m; j++)
        {
            if(s[j]=='o') p+=point[j];
            else vp[i].push_back(point[j]);
        }
        totalP[i]=p;
        maxP=max(maxP,p);
        sort(vp[i].begin(),vp[i].end(),greater<int>());
    }
   
    //cout<<maxP<<"\n";
    // prefix sum
    for (int i = 0; i <n; i++)
    {
        for (int j = 1; j < vp[i].size(); j++)
        {
            vp[i][j]=vp[i][j-1]+vp[i][j];
        }
    }
   
    for (int i = 0; i <n; i++)
    {
        int p=totalP[i];
        if(p==maxP) {
            cout<<0<<"\n";
            continue;
        }
        p=maxP-p;
        p++;
        cout<<upper_bound(vp[i].begin(),vp[i].end(),p)-vp[i].begin()+1<<"\n";
    }
}
