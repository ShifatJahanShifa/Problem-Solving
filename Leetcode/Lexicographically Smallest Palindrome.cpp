class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int sz=s.size();
        int mid=sz/2;
        for(int i=0;i<mid;i++) 
        {
            char c=min(s[i],s[sz-i-1]);
            s[i]=c;
            s[sz-i-1]=c;
        }
        return s;
    }
};
