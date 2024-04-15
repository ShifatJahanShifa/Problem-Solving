class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;
        int sz=arr.size();
        vector<long long>pre(sz+1,0);
        for(int i=0;i<sz;i++) 
        {
            pre[i+1]=(pre[i]^arr[i]);
        }
        int q=queries.size();
        for(int i=0;i<q;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            int temp=(pre[r+1]^pre[l]);
            res.push_back(temp);
        }
        return res;
    }
};
