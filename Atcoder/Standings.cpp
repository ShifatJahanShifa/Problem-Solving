#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;cin>>n;
    vector<pair<long double,int>>v(n);
    long double a,b;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b;
        v[i]=make_pair((a/((a+b)*-1)),i+1);  // ascending order is guranteed here. 
    }
    sort(v.begin(),v.end()); 
    for (int i = 0; i <n; i++)
    {
        cout<<v[i].second<<" ";
    }
}
