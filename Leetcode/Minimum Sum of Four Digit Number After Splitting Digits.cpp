class Solution {
public:
    int minimumSum(int num) {
        string s="";
        s=to_string(num);
        sort(s.begin(),s.end());
        string new1="",new2="";
        new1+=s[0];
        new1+=s[3];
        new2+=s[1];
        new2+=s[2];
        int n1=stoi(new1);
        int n2=stoi(new2);
        return n1+n2;
    }
};
