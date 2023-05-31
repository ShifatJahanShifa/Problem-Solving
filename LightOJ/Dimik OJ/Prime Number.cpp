#include<bits/stdc++.h>
using namespace std;

int arr[100010];
int prefixArr[100010]; 

void sieve()
{
    for(int i=2;i<100010;i++)
    {
        arr[i]=1;
    }
    int root=sqrt(100010);
    for(int i=2;i<=root;i++)
    {
        if(arr[i]) 
        {
            for(int j=2*i;j<100010 ;j+=i )
            {
                arr[j]=0;
            }
        }
    }
}

void prefix()
{
    prefixArr[0]=0;
    prefixArr[1]=0;
    prefixArr[2]=1;
    for(int i=3;i<100010;i++)
    {
        if(arr[i])
            prefixArr[i]=prefixArr[i-1]+1;
        else 
            prefixArr[i]=prefixArr[i-1];
    }
}

int main()
{
    int T;cin>>T;
    sieve();
   // prefix();
    
    while(T--)
    {
        int a,b;
        cin>>a>>b; 
        int count=0;
        for(int i=a;i<=b;i++) 
        {
            if(arr[i]) count++;
        }
        cout<<count<<"\n";
       // cout<<prefixArr[b]-prefixArr[a-1]<<"\n";
    }
}
