#include <bits/stdc++.h> 

long exp(long long a,long long b,long long m)
{
    long ans=1;
    a%=m;
    while(b>0)
    {
        if(b&1) 
        {
            ans=((ans)*a)%m;
        }
        a=((a)*(a))%m;
        b>>=1;
    }
    return ans;
}

int powerOfPower(int A, int B, int C, int M) 
{
    long res=exp(B,C,M-1);
    res=exp(A,res,M);
    return res;
}
