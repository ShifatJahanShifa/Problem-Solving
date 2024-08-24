#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,ans="";cin>>s;
  int k=0;
  for(int i=s.size()-1;i>-1;i--)
  {
    if(s[i]!='0') 
    {
      k=i;
      break; 
    }
  }
  for(int i=0;i<k;i++) 
  {
    cout<<s[i];
  }
  if(s[k]!='.') cout<<s[k]; 
  puts("");
}
