#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int r1,r2,B;
        scanf("%d%d%d",&r1,&r2,&B);
        int ballPlayed=(300-B);
        int remainRun=(r1-r2);
        double currentRunRate=0.0,requiredRunRate=0.0;
        currentRunRate=((r2*1.00)/ballPlayed)*6.00;
        if(r2>r1) requiredRunRate=0.0;
        else
        requiredRunRate=(((remainRun+1.0)*1.00)/B)*6.00;
        printf("%0.2lf %0.2lf\n",currentRunRate,requiredRunRate);
    }
}
