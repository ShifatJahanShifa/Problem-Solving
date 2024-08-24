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
    int N;
    cin >> N ;
    vector<pair<int,int>>vp;
    while (N--)
    {
        string s;
        cin >> s;
        int id,w=0;
        for (int i = 0; i < s.size(); i ++)
        {
            if (s[i]== '-')
            {
                id=i+1;
            }
            else if(s[i]=='o') w++;
        }
        vp.push_back(make_pair(w,id));
    }
    sort(vp.begin(),vp.end(),comp);
    for (int i = 0; i <vp.size(); i++)
    {
        cout<<vp[i].second<<" ";
    }
    puts("");
}
