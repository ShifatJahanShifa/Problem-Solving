

                                                    my solution
  ----------------------------------------------------------------------------------------------------------------------------
  #include <bits/stdc++.h> 

int maxProfit(int n,int x,vector<int>&profit,vector<int>&weight,vector<vector<int>>&DP)
{
    if(n==0) 
    {
        return ((x/weight[n]*profit[0]));
    }

    if(DP[n][x]!=-1) return DP[n][x];
    int taking=0,notTaking;
    notTaking=maxProfit(n-1,x,profit,weight,DP);
    if(weight[n]<=x) taking=profit[n]+maxProfit(n,x-weight[n],profit,weight,DP);

    return DP[n][x]=max(taking,notTaking);
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>>DP(n,vector<int>(w+1,-1));
    return maxProfit(n-1,w,profit,weight,DP);
}
