#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    string s;
    cin >> s;
    cin >> q;
    map<char, char> mp;
    char c, d;
    while (q--)
    {
        cin >> c >> d;
        if(mp[c]>='a' and mp[c]<='z')
        {}
        else      mp[c]=d;
        for(auto it:mp) 
        {
            if(it.second==c) 
            {
                mp[it.first]=d;
            }
        }
    }
    string ans="";
    for (int i = 0; i < n; i++)
    {
        if(mp[s[i]]>='a' and mp[s[i]]<='z')
        ans+=mp[s[i]];
        else ans+=s[i];
    }
    cout << ans << "\n";
}

