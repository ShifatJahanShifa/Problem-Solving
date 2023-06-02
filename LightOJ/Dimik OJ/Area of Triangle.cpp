#include<bits/stdc++.h>
using namespace std;

double area(double a,double b,double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    int T;cin>>T;
    while(T--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        printf("Area = %.3lf\n",area(a,b,c));
    }
}
