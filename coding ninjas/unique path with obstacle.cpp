

                                                                my solution 
 ------------------------------------------------------------------------------------------------------------------------------------------------------------
 
                                                                  const int mod=1e9+7;

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>DP(n,vector<int>(m,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 and j==0) DP[i][j]=1;
            else if(mat[i][j]==-1) DP[i][j]=0;
            else 
            {
                int up=0;
                if(i>0) up=DP[i-1][j];
                int left=0;
                if(j>0) left=DP[i][j-1];

                DP[i][j]=(up+left)%mod;
            }
        }
    }

    return DP[n-1][m-1];
}
