class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        int sz=nums.size();
        int maxi=0;
        long long sum=0,prev;
        for(int i=0;i<sz;i++) 
        {
            maxi=max(maxi,nums[i]);
            sum+=(maxi*1LL)+(nums[i]*1LL);
            ans.push_back(sum);
        }
        return ans;
    }
};
