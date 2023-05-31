#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    int T;cin>>T;
    while(T--)
    {
        string n;cin>>n;
        int a,b,c;
        a=n[0]-'0';
        b=n[1]-'0';
        c=n[2]-'0';
        a=a*a*a;
        b=b*b*b;
        c=c*c*c;
        if((a+b+c)==stoi(n)) 
        {
            cout<<n<<" is an armstrong number!\n";
        }
        else 
        {
            cout<<n<<" is not an armstrong number!\n";
        }
    }
}
