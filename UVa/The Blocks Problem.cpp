#include <bits/stdc++.h>
using namespace std;

stack<int> stk[27];
vector<int> pos(27);
char s[10];

void moveOnto(int a, int b) // first one
{
    // empty a
    while (stk[pos[a]].top() != a)
    {
        int temp = stk[pos[a]].top();
        stk[temp].push(temp);
        pos[temp] = temp;
        stk[pos[a]].pop();
    }
    // empty b
    while (stk[pos[b]].top() != b)
    {
        int temp = stk[pos[b]].top();
        stk[temp].push(temp);
        pos[temp] = temp;
        stk[pos[b]].pop();
    }
    stk[pos[b]].push(a);
    stk[pos[a]].pop();
    pos[a] = pos[b];
}

void moveOver(int a, int b)
{
    // empty a
    while (stk[pos[a]].top() != a)
    {
        int temp = stk[pos[a]].top();
        stk[temp].push(temp);
        pos[temp] = temp;
        stk[pos[a]].pop();
    }
    stk[pos[b]].push(a);
    stk[pos[a]].pop();
    pos[a] = pos[b];
}

void pileOnto(int a, int b)
{
    // empty b
    while (stk[pos[b]].top() != b)
    {
        int temp = stk[pos[b]].top();
        stk[temp].push(temp);
        pos[temp] = temp;
        stk[pos[b]].pop();
    }

    // moving a
    stack<int> ts;
    while (stk[pos[a]].top() != a)
    {
        int temp = stk[pos[a]].top();
        ts.push(temp);
        stk[pos[a]].pop();
    }
    stk[pos[a]].pop();
    ts.push(a);
    while (!ts.empty())
    {
        int temp = ts.top();
        stk[pos[b]].push(temp);
        pos[temp] = pos[b];
        ts.pop();
    }
}

void pileOver(int a, int b)
{
    // moving a
    stack<int> ts;
    while (stk[pos[a]].top() != a)
    {
        int temp = stk[pos[a]].top();
        ts.push(temp);
        stk[pos[a]].pop();
    }
    stk[pos[a]].pop();
    ts.push(a);
    while (!ts.empty())
    {
        int temp = ts.top();
        stk[pos[b]].push(temp);
        pos[temp] = pos[b];
        ts.pop();
    }
}

void output(int n)
{
    for (int i = 0; i < n; i++)
    {
        stack<int> ts;
        cout << i << ":";
        while (!stk[i].empty())
        {
            int temp = stk[i].top();
            ts.push(temp);
            stk[i].pop();
        }
        while (!ts.empty())
        {
            int temp = ts.top();
            cout << " " << temp;
            ts.pop();
        }
        cout << "\n";
    }
}

int main()
{
    int n, a, b;
    while (scanf("%d", &n) != EOF)
    {
        string k;
        for (int i = 0; i < n; i++)
        {
            stk[i].push(i);
            pos[i] = i;
        }
        while (scanf("%s", &s) != EOF)
        {
            if (s[0] == 'q')
                break;
            cin >> a >> k >> b;
            if (pos[a] == pos[b] or a == b)
            {
                continue;
            }
            if (s[0] == 'm' and k == "onto")
                moveOnto(a, b);
            else if (s[0] == 'm' and k == "over")
                moveOver(a, b);
            else if (s[0] == 'p' and k == "onto")
                pileOnto(a, b);
            else
                pileOver(a, b);
        }
        output(n);
    }
}
