problem link: https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?leftPanelTab=0

                                              my solution
------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h> 

int totalCost(int stairIndex,vector<int>&height,vector<int>&DP)
{
    if(stairIndex==0) return 0;
    if(DP[stairIndex]!=-1) return DP[stairIndex];

    int left,right;
    left=totalCost(stairIndex-1,height,DP)+abs(height[stairIndex]-height[stairIndex-1]);
    right=INT_MAX;
    if(stairIndex>1)
    right=totalCost(stairIndex-2,height,DP)+abs(height[stairIndex]-height[stairIndex-2]);

    DP[stairIndex]=min(right,left);

    return DP[stairIndex];
}

int frogJump(int n, vector<int> &heights)
{
    vector<int>DP(n,-1);
    return totalCost(n-1,heights,DP);
}
