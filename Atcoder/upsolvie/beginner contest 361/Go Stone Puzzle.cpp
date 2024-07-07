#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    string s,t;cin>>s>>t;
    // bfs approach
    map<string,int>level;
    queue<string>q;
    s+='.'; s+='.';
    t+='.';t+='.';
    q.push(s);
    level[s]=0;

    while (!q.empty())
    {
        string temp=q.front();
        q.pop();
        int mark;
        for (int i = 0; i <=n; i++)
        {
            if(temp[i]=='.' and temp[i+1]=='.') 
            {
                mark=i;
                break;
            }
        }
        for (int i = 0; i <=n; i++)
        {
            if(temp[i]!='.' and temp[i+1]!='.')
            {
                string p=temp;
                p[mark]=temp[i];
                p[mark+1]=temp[i+1];
                p[i]='.';
                p[i+1]='.';
                if(level.count(p)==0)
                {
                    q.push(p);
                    level[p]=level[temp]+1;
                }
            } 
        }
        
    }
    if(level.count(t)) 
    {
        cout<<level[t]<<"\n";
    }
    else cout<<"-1\n";
}


