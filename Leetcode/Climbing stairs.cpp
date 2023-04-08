problem link: https://leetcode.com/problems/climbing-stairs/ 


                                                           solution
 ----------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:

    int totalSteps(int stairIndex,vector<int>&DP) {
    if(stairIndex==0) return 1;
    if(DP[stairIndex]!=-1) return DP[stairIndex];

    int left,right;
    left=totalSteps(stairIndex-1,DP);
    right=1;
    if(stairIndex>1)
    right=totalSteps(stairIndex-2,DP);

    DP[stairIndex]=right+left;
    return DP[stairIndex];

    }

    int climbStairs(int n) {
        vector<int>DP(n,-1);
        return totalSteps(n-1,DP);
    }
};
