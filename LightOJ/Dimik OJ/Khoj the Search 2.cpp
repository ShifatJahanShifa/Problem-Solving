#include<bits/stdc++.h>
using namespace std;

vector<int> lps(string pattern)
{
    int length=pattern.size();
    vector<int>p(length);
    p[0]=0;
    int j=0;

    for(int i=1;i<length;i++)
    {
        while(j>0 and pattern[j]!=pattern[i])
        {
            j=p[j];
        }
        if(pattern[j]==pattern[i])
        {
            j++;
        }
        p[i]=j;
    }

    return p;
}

void KMPMatcher(string text,string pattern,vector<int>p)
{
    int textLength=text.size();
    int patternLength=pattern.size();
    int j=0;
    int count=0;
    
    for(int i=0;i<textLength;i++)
    {
        while(j>0 and pattern[j]!=text[i])
        {
            j=p[j-1];
        }
        if(pattern[j]==text[i])
        {
            j++;
        }
        if(j==patternLength)
        {
            count++;
            j=p[j-1];
        }
    }
    cout<<count<<"\n";
}

int main()
{
    int T;cin>>T;
    while(T--){
    string text;
    cin>>text;
    string pattern;
    cin>>pattern;

    vector<int>PITable;
    PITable=lps(pattern);

    KMPMatcher(text,pattern,PITable);
    }
}
