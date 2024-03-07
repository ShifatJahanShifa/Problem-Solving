#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        map<char, vector<int>> mps;
        //assign
        for(auto it:mp) 
        {
            mps[it.first].assign(s.size()+1,0);
        }

        for (auto it : mp)
        {
            char c=it.first;
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]==c) 
                {
                    mps[c][i+1]=mps[c][i]+1;
                }
                else 
                {
                    mps[c][i+1]=mps[c][i];
                }
            }
        }

        int ans = INT_MAX;
        for (auto it : mp)
        {
            char ch = it.first;
            int cnt = it.second;
            int temp = 0;
            for (int i = 0; i <= s.size() - cnt; i++)
            {
                temp = mps[ch][i+cnt]-mps[ch][i];
                ans = min(ans, (cnt - temp));
            }
        }
        cout << ans << "\n";
    }
}
