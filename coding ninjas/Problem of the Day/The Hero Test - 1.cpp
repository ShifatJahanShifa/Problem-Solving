link: https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> theOrder(int n)
{
	vector<int>ans;
	int marked=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=1;
	}
	int i=1;
	int count=0;
	bool ok=false;
	
	for (; i < n;)
    {
        ans.push_back(i + 1);
        arr[i] = 0;
        marked++;
        if (marked==(n - 1))
        {
            break;
        }
        for (int j = i + 1; j <= n; j++)
        {

            if (j == n)
            {
                j = -1;
            }
            else if(arr[j])
            {
                if (count == 1)
                {
                    i = j;
                    count = 0;
                    ok = true;
                    break;
                }
                count++;
            }
        }
    }
	for(int i=0;i<n;i++)
	{
		if(arr[i]) 
		{
			ans.push_back(i+1);
			break;
		}
	}
	return ans;
}
