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
    int times=0;
};

Node *root=new Node;

void insert(string word)
{
    Node *node=root;
    node->times++;
    for(int i=0; i<word.size(); i++)
    {
        if(node->isContainKey(word[i])==false)
        {
            node->put(word[i], new Node);
        }
        node=node->get(word[i]);
        node->times++;
    }

    node->setEnd();
}

int search(string word)
{
    Node *node=root;

    for(int i=0; i<word.size(); i++)
    {
        if(node->isContainKey(word[i])==false)
        {
            return 0;
        }
        node=node->get(word[i]);
    }

    return node->times;
}

int main()
{
    int n,q;
    cin>>n>>q;
    string s;

    while(n--)
    {
        cin>>s;
        insert(s);
    }

    while(q--)
    {
        cin>>s;
        cout<<search(s)<<"\n";
    }

}

