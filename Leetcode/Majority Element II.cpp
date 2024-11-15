class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int maj1=INT_MAX, maj2=INT_MAX;
        int vote1=0,vote2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(vote1==0 and nums[i]!=maj2) 
            {
                vote1++;
                maj1=nums[i];
            }
            else if(vote2==0 and nums[i]!=maj1) 
            {
                vote2++;
                maj2=nums[i];
            }
            else if(maj1==nums[i]) vote1++;
            else if(maj2==nums[i]) vote2++;
            else 
            {
                vote1--,vote2--;
            }
        }
        vote1=0,vote2=0;
        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]==maj1) vote1++;
            else if(nums[i]==maj2) vote2++; 
        }
        int t=(nums.size())/3;
        if(vote1>t) ans.push_back(maj1);
        if(vote2>t) ans.push_back(maj2);
        return ans;
    }
};
