problem link: https://www.codingninjas.com/codestudio/problems/matrix-chain-multiplication_975344?topList=top-dynamic-programming-questions&leftPanelTab=0

                                                                  my solution 
  --------------------------------------------------------------------------------------------------------------------------------------------
  
  #include <bits/stdc++.h> 

int matrixMultiplication(vector<int> &arr, int N)
{
    vector<vector<int>>DP(N,vector<int>(N,0));
   // vector<vector<int>>mark(n,vector<int>(n,0));

    for(int i=N-1;i>0;i--)
    {
        for(int j=i+1;j<N;j++)
        {
            int total=INT_MAX,cost;
            for(int k=i;k<j;k++)
            {
                cost=arr[i-1]*arr[k]*arr[j]+DP[i][k]+DP[k+1][j];
                if(cost<total)
                {
                    total=cost;
                   // mark[i][j]=k;
                }
            }
            DP[i][j]=total;
        }
    }

    return DP[1][N-1];
}
