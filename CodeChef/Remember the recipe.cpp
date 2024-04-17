#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz=2e5+5;

int main()
{
    int n;cin>>n;
    map<string,pair<int,string>>mp;
    string s; int p;
    for (int i = 0; i <n; i++)
    {
        cin>>s>>p;
        string sub="";
        //<<s<<" "<<p<<"\n";
        for (int j = 0; j <s.size(); j++)
        {
            sub+=s[j];
            if(mp.find(sub)==mp.end()) 
            {
                mp[sub]=make_pair(p,s);
            }
            else 
            {
                int val=mp[sub].first;
                if(val<p) 
                {
                    mp[sub]=make_pair(p,s);
                }
            }
        } 
    }
    int q;cin>>q;
    string ques;
    while (q--)
    {
        cin>>ques;
        if(mp.find(ques)==mp.end()) cout<<"NO\n";
        else
        cout<<mp[ques].second<<"\n";
    }
    
}
