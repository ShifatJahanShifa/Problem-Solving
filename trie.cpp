# problem statement

There is a bank which gives their customers a password 'only' for transactions(there is no username) via ATM. Also the ATM does not have any enter key, it automatically logs you into your account as soon as you enter the right password. There is a huge problem in such type of system,i.e., suppose that if two people A and B have “aadil” and “aadilahmad” as their passwords respectively, so whenever B will try to login, the machine will automatically login B into A’s account.

Input:

First line of the input contains an integer N,the number of users in Bank. Next N lines contains strings which are passwords of the users. Tell if the bank is vulnerable or non-vulnerable.

Output:

Print "vulnerable" if the bank is vulnerable or "non vulnerable" if the bank is not vulnerable.

Program constraints -

N <= 10^5

All passwords consists of lower case english alphabets

1<=length of password<=50
Sample Input -

2

likemeifyoucan

likeme
Sample Output -

vulnerable

-----------------------------------------------------------------------------------------------------------------------------
## solution
-----------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* links[26]= {NULL};
    bool flag=false;
    bool isContainKey(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node *node)
    {
        links[ch-'a']=node;
    }
    Node *get(char ch)
    {
        return links[ch-'a'];
    }
    void setEnd()
    {
        flag=true;
    }
    bool isEnd()
    {
        return flag;
    }
};

Node *root=new Node;

bool insert(string word)
{
    Node *node=root;
    int len=word.size(),track=0;
    for(int i=0; i<word.size(); i++)
    {
        if(node->isContainKey(word[i])==false)
        {
            if(node->isEnd())
            {
                return true;
            }
            node->put(word[i], new Node);
            node=node->get(word[i]);
        }
        else
        {
            node=node->get(word[i]);
            track++;
        }
    }

    if(track==len)
        return true;

    node->setEnd();
    return false;
}

int main()
{
    int n;
    cin>>n;
    string s;
    bool ans=false;

    while(n--)
    {
        cin>>s;

        if(insert(s))
        {
            ans=true;
        }
    }

    ans ? puts("vulnerable") : puts("non vulnerable");
}
