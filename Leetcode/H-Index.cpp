class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int h[1005]={0};
        for(int i=0;i<n;i++)
        {
            if(citations[i]) 
            {
                h[1]++;
                h[citations[i]+1]--;
            }
        }
        for(int i=1;i<1005;i++)
        {
            h[i]+=h[i-1];
        }
        int hindex=0;
        for(int i=1;i<1005;i++)
        {
            if(h[i]>=i) 
            {
                hindex=i;
            }
        }
        return hindex;
    }
};
