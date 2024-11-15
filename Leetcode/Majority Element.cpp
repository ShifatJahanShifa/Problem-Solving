class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority,vote=0;
        for(int i=0;i<nums.size();i++)
        {
            if(vote==0) 
            {
                majority=nums[i];
                vote++;
            }
            else if(nums[i]==majority) 
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }
        return majority;
    }
};
