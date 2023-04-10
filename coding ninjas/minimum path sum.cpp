


                                                                my solution 
 ---------------------------------------------------------------------------------------------------------------------------------------------------
 
 #include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    int row=grid.size();
    int column=grid[0].size();

    vector<vector<int>>DP(row,vector<int>(column,0));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i==0 and j==0) DP[i][j]=grid[i][j];
            else 
            {
                int up=grid[i][j];
                if(i>0) up+=DP[i-1][j];
                else up+=1e9;
                int left=grid[i][j];
                if(j>0) left+=DP[i][j-1];
                else left+=1e9;
                DP[i][j]=min(up,left);
            }
        }
    }

    return DP[row-1][column-1];
}
