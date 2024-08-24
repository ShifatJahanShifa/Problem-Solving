#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int n,k;
int arr[8],seq[8];

void solve(int cur)
{
    if(cur==n) 
    {
        int sum=0;
        for (int i = 0; i <n; i++)
        {
            sum+=seq[i];
        }
        if(sum%k==0) 
        {
            for (int i = 0; i <n; i++)
            {
                cout<<seq[i]<<" \n"[i==n-1];
            }
        }
        return;
    }
    for (int i = 1; i <=arr[cur]; i++)
    {
        seq[cur]=i;
        solve(cur+1);
    }
    
}

int main()
{
    cin>>n>>k;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    solve(0);
}


