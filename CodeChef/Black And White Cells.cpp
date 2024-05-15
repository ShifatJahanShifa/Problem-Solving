#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1e9+7;

int main()
{
    int T;cin>>T;
    while (T--)
    {
        string s;cin>>s;
        int left=0,right=0;
        int i;
        for (i = 0; i <s.size(); i++)
        {
            if(s[i]=='B') left++; 
            else break;
        }
        for (i=i+1; i <s.size(); i++)
        {
            if(s[i]=='B') right++;
        }
        
        if(left==right) cout<<"Chef\n";
        else cout<<"Aleksa\n";
    }
    
}
