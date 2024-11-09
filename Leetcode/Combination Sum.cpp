class Solution {
public:
    vector<vector<int>>ans;
    vector<int>combinations;
    void calculate(vector<int>& candidates, int target,int start)
    {
        if(target==0) 
        {
            ans.push_back(combinations);
            return;
        }

        for(int i=start;i<candidates.size();i++)
        {
            if(candidates[i]<=target) 
            {
                combinations.push_back(candidates[i]);
                calculate(candidates,target-candidates[i],i);
                combinations.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        calculate(candidates,target,0);
        return ans;
    }
};
