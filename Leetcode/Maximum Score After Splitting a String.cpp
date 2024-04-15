class Solution {
public:
    int maxScore(string s) {
        int sz=s.size();
        int pre[sz+1],suf[sz+1];
        for(int i=0;i<=sz;i++) 
        {
            pre[i]=0;
            suf[i]=0;
        }
        for(int i=0;i<sz;i++) 
        {
            pre[i+1]=pre[i]+(s[i]=='0');
        }
        for(int i=sz-1;i>-1;i--) 
        {
            suf[i]=suf[i+1]+(s[i]=='1');
        }
        int ans=0;
        for(int i=1;i<sz;i++) 
        {
            ans=max(ans,pre[i]+suf[i]);
        }
        return ans;
    }
};
