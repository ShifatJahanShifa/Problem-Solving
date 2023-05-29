#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int T,k=1;cin>>T;
    while(k<=T)
    {
        int N;cin>>N;
        set<int>st;
        st.insert(1);
        st.insert(N);
        int loop=ceil(sqrt(N));
        for(int i=2;i<=loop;i++) 
        {
            if(!(N%i)) 
            {
                st.insert(i);
                st.insert(N/i);
            }
        }
        int s=st.size(),j=1;
        cout<<"Case "<<k<<": ";
        for(auto it=st.begin();it!=st.end();it++) 
        {
            if(j<s)
            cout<<*it<<" ";
            else cout<<*it<<"\n";
            j++;
        }
        k++;
    }
}
