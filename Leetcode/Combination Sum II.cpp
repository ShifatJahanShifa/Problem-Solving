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
            if(candidates[i]<=target and (i==start || candidates[i]!=candidates[i-1])) 
            {
                combinations.push_back(candidates[i]);
                calculate(candidates,target-candidates[i],i+1);
                combinations.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        calculate(candidates,target,0);
        
        return ans;
    }
};
