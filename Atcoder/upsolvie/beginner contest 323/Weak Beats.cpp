#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    bool ok=true;
    for (int i = 1; i <16; i+=2)
    {
        if(s[i]!='0') 
        {
            ok=false;
            break;
        }
    }
    ok ? puts("Yes") : puts("No");
}
