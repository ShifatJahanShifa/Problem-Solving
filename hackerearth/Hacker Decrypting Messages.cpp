link: https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/


---------------------------------------------------------------- my solution ------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int hashArray[N];
int highestPrime[N];

void calculateHighestPrime()     // t.c=O(nloglogn)
{
    for (int i = 2; i < N; i++)
    {
        if (highestPrime[i] == 0)
        {
            for (int j = i; j < N; j += i)
            {
                highestPrime[j] = i;
            }
        }
    }
}

vector<int> primeFactorization(int n)     // t.c=O(logn)
{
    vector<int>ans;
    int hp;
    while (n>1)
    {
        hp=highestPrime[n];
        while ((n%hp)==0)
        {
            n/=hp;
        }
        ans.push_back(hp);
    }
    return ans;
}

void canMake()     // t.c=<O(nlogn)
{
    for (int i = 2; i <N; i++)
    {
        if(hashArray[i]) 
        {
            for (long long int j = i; j <N*1LL; j*=i)
            {
                hashArray[j]=1;
            }
        }
    }
}

int main()
{
    int n, q, x, e;
    cin >> n >> q;
    calculateHighestPrime();
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        hashArray[e] = 1;
    }
    canMake();
    bool isPossible;
    while (q--)
    {
        cin >> x;
        auto v=primeFactorization(x);
        isPossible=false;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i; j < v.size(); j++)
            {
                int product=v[i]*v[j];
                if(i==j and (x%product)) continue;
                int toDelete=x/product;
                if(hashArray[toDelete] or toDelete==1) 
                {
                    isPossible=true;
                    break;
                }
            }
            if(isPossible) break;
        }
        cout<<(isPossible ? "YES\n":"NO\n");
    }
}
