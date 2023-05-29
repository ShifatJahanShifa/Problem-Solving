#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    getchar();
    while(T--)
    {
        string s,word;
        getline(cin,s);
        istringstream iss(s);
        while(iss>>word)
        {
            reverse(word.begin(),word.end());
            cout<<word<<" ";
        }
        puts("");
    }
}
