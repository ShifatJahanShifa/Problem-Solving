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
        int k;
        cin >> s >> k;
        int sz = s.size();
        stack<char> stk;
        int cnt = 0;
        for (int i = 0; i < sz; i++)
        {
            if (!stk.empty())
            {
                int top = stk.top();
                if (top < s[i])
                {
                    while (cnt < k and !stk.empty())
                    {
                        top = stk.top();
                        if (top < s[i])
                        {
                            stk.pop();
                            cnt++;
                        }
                        else break;
                    }
                    stk.push(s[i]);
                }
                else
                    stk.push(s[i]);
            }
            else
            {
                stk.push(s[i]);
            }
        }
        int req=sz-k;
        if (stk.size()!=req)
        {
            while (cnt<k)
            {
                //cout<<stk.top()<<"\n";
                stk.pop();
                cnt++;
            }
        }
        vector<char>v;
        while (!stk.empty())
        {
            v.push_back(stk.top());
            stk.pop();
        }
        reverse(v.begin(),v.end());
        for (int i = 0; i <v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<"\n";
    }
}
