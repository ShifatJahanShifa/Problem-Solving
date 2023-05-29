#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    getchar();
    while(T--)
    {
        string s;getline(cin,s);
        istringstream iss(s);
        string word;
        int cnt=0;
        while(iss>>word)
        {
            cnt++;
        }
        cout<<"Count = "<<cnt<<"\n";
    }
}
