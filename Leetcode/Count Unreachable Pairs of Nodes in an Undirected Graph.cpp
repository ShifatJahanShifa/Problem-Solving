class Solution {
public:
    vector<vector<int>>vv;
    vector<bool>isVisited;
    vector<vector<int>>graph;
    void dfs(int u,int cnt)
    {
        isVisited[u]=true;
        vv[cnt].push_back(u);
        for(auto v:graph[u])
        {
            if(!isVisited[v]) 
            {
                dfs(v,cnt);
            }
        }
    }

    long long countPairs(int n, vector<vector<int>>& edges) 
    {
        isVisited.resize(n,false);
        graph.resize(n,vector<int>());
        vv.resize(n,vector<int>());
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!isVisited[i]) dfs(i,cnt);
            cnt++;
        }
        // cout<<cnt<<"  sd\n";
        long long ans=0;
        vector<long long>vc;
        for(int i=0;i<cnt;i++)
        {
            int sz=vv[i].size();
            vc.push_back(sz);
            // for(int v:vv[i]) 
            // {
            //     cout<<v<<" ";
            // }
            // puts("");
        }
        for(int i=1;i<vc.size();i++)
        {
            vc[i]=vc[i]+vc[i-1];
        }
        for(int i=0;i<vc.size();i++)
        {
            if((i+1)<vc.size())
            {
                long long total=vc[vc.size()-1]-vc[i];
                long long multi=0LL;
                if(i!=0)
                multi=vc[i]-vc[i-1];
                else multi=vc[i];
                ans+=(multi*total);
            }
        }
        return ans;
    }
};
