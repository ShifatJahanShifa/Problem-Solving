#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int xc,yc,r,x,y;
        cin>>xc>>yc;
        cin>>r;
        cin>>x>>y;
        int distance;
        distance=sqrt(((xc-x)*(xc-x))+((yc-y)*(yc-y)));
        if(distance<r) 
        {
            puts("The point is inside the circle");
        }
        else 
        {
            puts("The point is not inside the circle");
        }
    }
}
