class Solution {
public:
    int n=0,m=0;
    // vector<vector<bool>>isVisited(300,vector<bool>(300,false));
    bool isVisited[300][300];
    vector<pair<int,int>>vp{{-1,0},{0,1},{1,0},{0,-1}};

    bool isSatisfied(int x,int y)
    {
        if(x>-1 and x<m and y>-1 and y<n) return true;
        return false;
    }

    void DFS(int x,int y,vector<vector<char>>& grid)
    {
        isVisited[x][y]=true;
        for(int i=0;i<4;i++)
        {
            int xx=x+vp[i].first;
            int yy=y+vp[i].second;
            if(isSatisfied(xx,yy) and grid[xx][yy]=='1' and isVisited[xx][yy]==false)
            {
                DFS(xx,yy,grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int ans=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                isVisited[i][j]=false;
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1' and isVisited[i][j]==false)
                {
                    ans++;
                    DFS(i,j,grid);
                    // cout<<i<<" "<<j<<"\n";
                }
            }
        }
        return ans;    
    }
};
