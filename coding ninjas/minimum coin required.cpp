problem link: https://www.codingninjas.com/codestudio/problems/minimum-elements_3843091?leftPanelTab=1

                                                                          my solution 
------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h> 
int findMinElement(int n,int x,vector<int>&num,vector<vector<int>>&DP)
{
    if(n==0) 
    {
        if(x%num[0]==0) return x/num[0];
        return 1e9;
    }
    if(DP[n][x]!=-1) return DP[n][x];
    int taking=INT_MAX,notTaking;
    notTaking=0+findMinElement(n-1,x,num,DP);
    if(num[n]<=x) taking=1+findMinElement(n,x-num[n],num,DP);

    return DP[n][x]=min(taking,notTaking);
}
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    vector<vector<int>>DP(n,vector<int>(x+1,-1));
    int ans=findMinElement(n-1,x,num,DP);
    if(ans==1e9) return -1;
    else return ans;
}
