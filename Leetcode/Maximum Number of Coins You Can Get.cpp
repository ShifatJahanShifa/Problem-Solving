class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int sz=piles.size();
        int ans=0;
        int cnt=0;
        int t=sz/3;
        for(int i=1;i<sz;i+=2) 
        {
            ans+=piles[i];
            cnt++;
            if(cnt==t) break;
        }
        return ans;
    }
};
