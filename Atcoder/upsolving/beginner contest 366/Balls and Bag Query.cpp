#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    set<int>st;
    multiset<int>mst;
    int t,v;
    while (q--)
    {
        cin>>t;
        if(t==1) 
        {
            cin>>v;
            st.insert(v);
            mst.insert(v);
        }
        else if(t==2)
        {
            cin>>v;
            mst.erase(mst.find(v));
            if(mst.count(v)==0) st.erase(v);
        }
        else 
        {
            cout<<st.size()<<"\n";
        }
    }
    
    
}
