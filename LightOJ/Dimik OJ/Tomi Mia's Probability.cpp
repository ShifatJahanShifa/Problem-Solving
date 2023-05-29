#include<bits/stdc++.h>
using namespace std;

long long int getFactorial(int n)
{
    if(n==1) return 1;
    return n*getFactorial(n-1);
}

int main()
{
    int T;cin>>T;
    getchar();
    while(T--)
    {
        string s;
        getline(cin,s);
        
        map<string,int>mp;
        istringstream iss(s);
        string word;
        int cnt=0;
        while(iss>>word) 
        {
            cnt++;
            mp[word]++;
        }
        vector<int>duplicate;
        duplicate.push_back(1);
        for(auto it:mp)
        {
            if(it.second>1) 
            {
                duplicate.push_back(it.second);
            }
        } 
        long long int upper=getFactorial(cnt),lower=1,total;
        for(int i=0;i<duplicate.size();i++)
        {
            lower*=getFactorial(duplicate[i]);
        }
        total=upper/lower;
        cout<<"1/"<<total<<"\n";
    }
}
