problem link: https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?leftPanelTab=0

                                              my solution 
 --------------------------------------------------------------------------------------------------------------------------------------
 
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


int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>DP(n,vector<int>(4,-1));
    return totalPoint(n-1,3,points,DP);
}
