#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1e9+7;

vector<int>primes;

void sieve1(int n) 
{
    vector<bool>marked(n+1,true);
    marked[0]=marked[1]=false;
    for (int i = 2; i*i<=n; i++)
    {
        if(marked[i]==false) continue;
        for (int j =i*i; j <=n; j+=i)
        {
            marked[j]=false;
        }
    }
    for (int i = 2; i <=n; i++)
    {
        if(marked[i]) primes.push_back(i);
    }
}

int main()
{
    //q.2: find out prime numbers within a range;
    int n=100000000;
    sieve1(n);
    for (int i = 0; i <primes.size(); i+=100)
    {
        cout<<primes[i]<<"\n";
    }
}
