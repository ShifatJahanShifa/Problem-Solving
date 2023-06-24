link: https://atcoder.jp/contests/abc307/tasks/abc307_d

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    stack<char>stk;
    char ch;
    int cnt=0;
    bool ok=true;
    for (int i = n-1; i>-1; i--)    // a(b(c))d
    {
        ch=s[i];
        if(ch==')') cnt++;
        if(ch=='(') 
        {
            while(stk.size() and cnt) 
            {
                if(stk.top()==')') 
                {
                    stk.pop();
                    cnt--;
                    ok=false;
                    break;
                } 
                stk.pop();
            }
            if(ok) stk.push(ch);
            ok=true;
        }
        else 
        {
            stk.push(ch);
        }
    }
    while (stk.size())
    {
        cout<<stk.top();
        stk.pop();
    }   
}
