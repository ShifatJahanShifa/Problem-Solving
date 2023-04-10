


                                                                  my solution 
  -----------------------------------------------------------------------------------------------------------------------------------------
  
  #include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<vector<int>>DP(n,vector<int>(n,0));
	for(int i=0;i<n;i++) DP[n-1][i]=triangle[n-1][i];

	for(int i=n-2;i>=0;i--)
	{
		for(int j=i;j>=0;j--) 
		{
			int down=INT_MAX,diagonal=INT_MAX;
			down=triangle[i][j]+DP[i+1][j];
			diagonal=triangle[i][j]+DP[i+1][j+1];

			DP[i][j]=min(down,diagonal);
		}
	}

	return DP[0][0];
}
