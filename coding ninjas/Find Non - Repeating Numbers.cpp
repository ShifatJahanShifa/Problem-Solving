problem link: https://www.codingninjas.com/codestudio/guided-paths/competitive-programming/content/148629/offering/1792857


#include <bits/stdc++.h> 
vector<int> findNonRepeating(vector<int> a)
{
	vector<int>res;

	int ans=0;
	for(int i=0;i<a.size();i++)
	{
		ans^=a[i];
	}

	int num=ans&(~(ans-1));

	int x=0,y=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]&num)
		x^=a[i];
		else 
		y^=a[i]; 
	}
	
	res.push_back(x);
	res.push_back(y);

	return res;
}
