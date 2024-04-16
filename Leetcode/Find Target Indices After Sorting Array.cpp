class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int pos=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int>list;
        if(pos!=nums.size() and nums[pos]==target) 
        {
            int pos1=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            for(int i=pos;i<pos1;i++) 
            {
                list.push_back(i);
            }
        }
        return list;
    }
};
