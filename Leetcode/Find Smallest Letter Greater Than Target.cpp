class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int sz=letters.size();
        int pos=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(pos==sz) return letters[0];
        else return letters[pos];
    }
};
