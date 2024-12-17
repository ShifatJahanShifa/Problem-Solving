class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int ans=0;
        int pos=nums[0];
        pos=min(pos,n-1);
        int i=0;
        
        while(pos<n-1)
        {
            int nextPos=pos;
            ans++;
            for(i++;i<=pos;i++) 
            {
                int vpos=i+nums[i];
                if(vpos>nextPos) 
                {
                    nextPos=vpos;
                }
            }
            pos=nextPos;
            pos=min(pos,n-1);
            i--;
        }
        ans++;
        return ans;
    }
};
