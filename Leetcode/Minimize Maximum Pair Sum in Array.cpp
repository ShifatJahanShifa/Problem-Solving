class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        int sz=nums.size();
        int ans=0; int temp=0;
        for(int i=0;i<mid;i++) 
        {
            temp=nums[i]+nums[sz-i-1];
            ans=max(temp,ans);
        }
        return ans;
    }
};
