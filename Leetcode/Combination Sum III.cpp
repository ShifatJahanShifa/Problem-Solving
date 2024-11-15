class Solution {
public:
    vector<vector<int>>ans;
    vector<int>combinations;
    void calculate(int target,int start,int k)
    {
        if(target==0 or k==0) 
        {
            if(target==0 and k==0) 
            {
                ans.push_back(combinations);
            }
            return;
        }

        for(int i=start;i<10;i++)
        {
            combinations.push_back(i);
            calculate(target-i,i+1,k-1);
            combinations.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        calculate(n,1,k);
        
        return ans;
    }
};
