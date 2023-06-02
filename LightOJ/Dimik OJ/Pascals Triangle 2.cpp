## efficient solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        long long arr[N+1][N+1];
        arr[0][0]=1;
        arr[1][0]=1;
        arr[1][1]=1;
        
        for(int i=2;i<=N;i++)
        {
            arr[i][0]=1;
            for(int j=1;j<i;j++)
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr[i][i]=1;
        }
        
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<arr[i][i]<<"\n";
        }
        puts("");
    }
}
