class Solution {
public:
    bool canJump(vector<int>& nums) {
        map<int,int>mp;
        mp[-1]=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
            {
                mp[i]=mp[i]+mp[i-1];
            }
            else 
            {
                int mark=nums[i]+i;
                if(mark>n) 
                {
                    mp[n+2]=-1;
                }
                else mp[mark]=mp[mark]-1;
                mp[i]=mp[i]+mp[i-1]+1;
            }
        }
        bool ok=true;
        for(int i=0;i<nums.size()-1;i++) 
        {
            //cout<<mp[i]<<" ";
            if(mp[i]==0) 
            {
                ok=false;
                break;
            }
        }
        return ok;
    }
};
