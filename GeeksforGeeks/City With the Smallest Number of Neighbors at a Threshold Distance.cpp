problem link:  https://practice.geeksforgeeks.org/problems/city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=city-with-the-smallest-number-of-neighbors-at-a-threshold-distance


                                  my solution 
 //{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                     vector<vector<int>>dist(n,vector<int>(n,1e8));
                     for(auto it:edges) 
                     {
                         dist[it[0]][it[1]]=it[2];
                         dist[it[1]][it[0]]=it[2];
                     }
                     for(int i=0;i<n;i++) dist[i][i]=0;
                     for(int k=0;k<n;k++)
                     {
                         for(int i=0;i<n;i++)
                         {
                             for(int j=0;j<n;j++)
                             {
                                 if(dist[i][k]==1e8 or dist[k][i]==1e8) continue;
                                 dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                             }
                         }
                     }
                     
                     int cityNo=-1;
                     int cnt=n;
                     for(int i=0;i<n;i++)
                     {
                         int cityCount=0;
                         for(int j=0;j<n;j++)
                         {
                             if(dist[i][j]<=distanceThreshold) 
                             {
                                 cityCount++;
                             }
                         }
                         
                         if(cityCount<=cnt)
                         {
                             cnt=cityCount;
                             cityNo=i;
                         }
                     }
                     
                     return cityNo;
                 }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends
