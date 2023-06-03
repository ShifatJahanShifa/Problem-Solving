#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	n/=2;
	for(auto it:mp)
	{
		if(it.second>n)
		{
			return it.first;
		}
	}
	return -1;
}
