class Solution {
public: 
    bool isPalindrome(string s,int l,int r)
    {
        bool ok=true;
        while(l<r) 
        {
            if(s[l]!=s[r]) 
            {
                ok=false;
                break;
            }
            else 
            {
                l++,r--;
            }
        }
        return ok;
    }

    bool validPalindrome(string s) {
        if(s.size()<3) return true;
        
        bool yet=false,ok=false;
        int l=0,r=s.size()-1;
        while(l<r)
        {
            if(s[l]==s[r]) 
            {
                l++,r--;
            }
            else 
            {
                if((l+1)<s.size() and s[l+1]==s[r]) 
                {
                    yet=isPalindrome(s,l+1,r);
                    if(yet)
                    return yet;
                }
                if(yet==false and (r-1)>-1 and s[r-1]==s[l]) 
                {
                    r=r-1;
                    yet=isPalindrome(s,l,r);
                    // cout<<l<<" "<<r<<" "<<s[l]<<" "<<s[r]<<"\n";
                    if(yet)
                    return yet;
                }
                if(yet==false)
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
