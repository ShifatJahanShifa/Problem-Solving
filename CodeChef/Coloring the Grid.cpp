#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
bool isValid(int x,int y)
{
    if(x<0 or x>=n or y<0 or y>=m) return false;
    return true;
}

int main()
{
    int T;cin>>T;
    while (T--)
    {
        cin>>n>>m;
        char in[n][m];
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j <m; j++)
            {
                cin>>in[i][j];
            }
        }
        vector<vector<pair<int,int>>>v={
            {{0,1},{1,1},{1,0}},
            {{1,0},{1,-1},{0,-1}},
            {{0,-1},{-1,-1},{-1,0}},
            {{-1,0},{-1,1},{0,1}}
        };
        bool ok=false,notOk=false;
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j <m; j++)
            {
                if(in[i][j]=='#')continue;
                ok=false;
                if(in[i][j]=='.') 
                {
                    int a,b,c,d,e,f;
                    for (int k = 0; k <4; k++)
                    {
                        a=i+v[k][0].first;
                        b=j+v[k][0].second;
                        if(!isValid(a,b)) continue;
                        c=i+v[k][1].first;
                        d=j+v[k][1].second;
                        if(!isValid(c,d)) continue;
                        e=i+v[k][2].first;
                        f=j+v[k][2].second;
                        if(!isValid(e,f)) continue;
                        if(in[a][b]!='#' and in[c][d]!='#' and in[e][f]!='#') 
                        {
                            ok=true;
                            in[a][b]='c',in[c][d]='c',in[e][f]='c',in[i][j]='c';
                            break;
                        }
                    }
                    if(!ok) notOk=true;
                }
            }
        }
        if(!notOk) cout<<"YES\n";
        else cout<<"NO\n";
    }
} 
