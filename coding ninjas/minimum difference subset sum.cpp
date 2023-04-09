problem link: https://www.codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

                                                            my solution 
-------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h> 
int minSubsetSumDifference(vector<int>& arr, int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int total=sum;
	vector<vector<bool>>DP(n,vector<bool>(sum+1,0));
	
	for(int i=0;i<n;i++) DP[i][0]=true;
	if(arr[0]<=sum) DP[0][arr[0]]=true;

    for (int i = 1; i < n; i++) {
      for (int j = 1; j <= sum; j++) {
        bool notTaking = DP[i - 1][j];
        bool taking = false;
        if (j >= arr[i])
          taking = DP[i - 1][j-arr[i]];

        DP[i][j] = taking | notTaking;
      }
    }
    total=sum;
	sum/=2;
	int mini=INT_MAX;
	for(int i=0;i<=sum;i++)
	{
		if(DP[n-1][i]==true) 
		{
			int j=total-i;
			mini=min(mini,abs(j-i));
		}
	}
	return mini;
}
