# problem statement 

Ada the Ladybug has many things to do and almost no time. She wants to to save time while searching for something so she have decided to make a search engine.

She has many words in her TODO list. It costs her precious time to find out, whether a word is in it so she seeks your help. You will get list and some queries. You will be asked, to find out how many words in TODO list have a word as prefix.

Input
The first line contains N, Q: the number words in TODO list and number of queries.

N lines follow, with words (of TODO list) consisting of lowercase letters. The sum of their lengths won't be greater than 106

Q lines follow, with words (queries) consisting of lowercase letters. The sum of their lengths won't be greater than 106

Output
For each query print the number of words in TODO list which have actual word as prefix.

Example Input
12 6
bulldog
dog
dogged
doggedly
doggerel
dogma
dogmatic
dogmatism
dogs
catastroph
catastroph
doctor
cat
dog
dogg
do
doctrinography
dogge
Example Output
2
8
3
9
0
3

------------------------------------------------------------------------------------------------------------------------------------------------------
                solution 
------------------------------------------------------------------------------------------------------------------------------------------------------

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

