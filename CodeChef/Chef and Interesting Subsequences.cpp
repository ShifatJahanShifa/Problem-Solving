#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (auto &it : v)
			cin >> it;
		sort(v.begin(), v.end());
		ll total = 0, r = 0;
		int check = v[k - 1];
		for (int i = 0; i < n; i++)
		{
			if (check == v[i])
				total++;
		}
		for (int i = 0; i < k; i++)
		{
			if (check == v[i])
				r++;
		}
		// ncr
		if (total - r < r)
			r = total - r;
		ll up = 1, down = 1;
		if (r == 0)
			cout << 1 << "\n";
		else
		{
			while (r)
			{
				up *= total;
				down *= r;
				ll gcd = __gcd(up, down);
				up /= gcd;
				down /= gcd;
				total--, r--;
			}
			cout << up << "\n"; // down will be 1 because ncr is natural number. so gcd diye katakati hoyei jabe
		}
	}
}
