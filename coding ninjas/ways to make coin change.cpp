

                                                  solution
  -----------------------------------------------------------------------------------------------------------------------------------------
  #include<bits/stdc++.h>

long total(int n,int x,int *num,vector<vector<long>>&DP)
{
    if(n==0) 
    {
        return (x%num[0]==0);
    }
    
    if(DP[n][x]!=-1) return DP[n][x];
    long taking=0,notTaking;
    notTaking=total(n-1,x,num,DP);
    if(num[n]<=x) taking=total(n,x-num[n],num,DP);

    return DP[n][x]=taking+notTaking;
} 
long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>>DP(n,vector<long>(value+1,-1));
    return total(n-1,value,denominations,DP);
}
