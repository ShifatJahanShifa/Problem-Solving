link: https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/


-----------------------------------------------------------******-------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--)
	{
		long long n;cin>>n;
		cout<<__builtin_popcountll(n)<<"\n";
	}
}
