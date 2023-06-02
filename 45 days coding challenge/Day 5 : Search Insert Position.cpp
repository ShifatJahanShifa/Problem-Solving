#include<bits/stdc++.h>
int searchInsert(vector<int>& arr, int m)
{
	int index;
	index=lower_bound(arr.begin(),arr.end(),m)-arr.begin();
	return index;
}
