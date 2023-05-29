#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int T;cin>>T;
    getchar();
    while(T--)
    {
        string s;
        getline(cin,s);
        int count=0; 
        istringstream iss(s);
        string number;
        while(iss>>number) 
        {
            count++;
        }
        cout<<count<<"\n";
    }
}
