class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int len=nums.size();
        int currsum=0;
        int start=0,end;
        for(int i=0;i<len;i++) 
        {
            currsum+=nums[i];
            while(currsum>=target) 
            {
                int temp=i-start+1;
                ans=min(ans,temp);
                currsum-=nums[start];
                start++;
            }
        }
        if(ans==INT_MAX) ans=0;
        return ans;
    }
};
