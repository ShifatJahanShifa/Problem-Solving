problem link: https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0

                                                                  solution 
---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h> 
bool findSum(int n,int k,vector<int>&array,vector<vector<int>>&DP)
{
    if(k==0) return true;
    if(n==0) return array[n]==k;

    if(DP[n][k]!=-1) return DP[n][k];
    bool notTaking=findSum(n-1,k,array,DP);
    bool taking=false;
    if(k>=array[n])
    taking=findSum(n-1,k-array[n],array,DP);

    return DP[n][k]= taking | notTaking;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>>DP(n,vector<int>(k+1,-1));
    return findSum(n-1,k,arr,DP);
}
