



#include <bits/stdc++.h> 
int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    vector<vector<int>>DP(n,vector<int>(tar+1,0)); 
    for(int i=0;i<n;i++) DP[i][0]=1; 
    for(int i=0;i<=tar;i++)
    if(num[0]==i) DP[0][i]=1;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=tar;j++) 
        {
            int notTaking=DP[i-1][j];
            int taking=0;
            if(j>=num[i])
            taking=DP[i-1][j-num[i]];

            DP[i][j]=notTaking+taking;
        }
    }
    return DP[n-1][tar];
}
