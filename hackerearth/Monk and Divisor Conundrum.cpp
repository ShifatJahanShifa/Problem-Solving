link: https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/

my solution: 
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int hashArray[N];
int countArray[N];
void countMultiple()
{
	for(int i=1;i<N;i++)
	{
		for(int j=i;j<N;j+=i) 
		{
			countArray[i]+=hashArray[j];
		}
	}
}

int main() {
	int n,a,t;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		hashArray[a]++;  // one particular element can be multiple times
	}
	countMultiple();
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int p,q;cin>>p>>q;
        long long ans=0;
		ans+=countArray[p]+countArray[q];
		long long lcm=(p*1LL*q)/(__gcd(p,q));
		if(lcm<N) ans-=countArray[lcm];
		cout<<ans<<"\n";
	}
}
