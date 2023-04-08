problem link: https://atcoder.jp/contests/dp/tasks/dp_c

                                                               my solution 
 ----------------------------------------------------------------------------------------------------------------------------------------------------------
 
                                                                 /* memorized version */

#include<bits/stdc++.h>
using namespace std;

int totalPoint(int day,int last,vector<vector<int>>&point,vector<vector<int>>&DP)
{
    if(day==0)
    {
        int points=0;
        for(int task=0; task<3; task++)
        {
            if(task!=last)
            {
                points=max(points,point[day][task]);
            }
        }

        return DP[day][last]=points;
    }
    if(DP[day][last]!=-1) return DP[day][last];

    int points=0,total=0;
    for(int task=0; task<3; task++)
    {
        if(task!=last)
        {
            points=totalPoint(day-1,task,point,DP)+point[day][task];
            total=max(points,total);
        }
    }

    return DP[day][last]=total;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>point(n,vector<int>(3));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
            cin>>point[i][j];
    }

    vector<vector<int>>DP(n,vector<int>(4,-1));
    cout<<totalPoint(n-1,3,point,DP);
}
