problem link: https://www.codingninjas.com/codestudio/problems/maximum-xor_973113?leftPanelTab=0

              solution
-------------------------------------------------------------------------------------------------------------------------------------------
struct Node{
    Node *links[2];

    bool isContain(int bit)
    {
        return links[bit]!=NULL;
    }

    void put(int bit,Node *node)
    {
        links[bit]=node;
    }

    Node *get(int bit)
    {
        return links[bit];
    }
}; 

class Trie{
    private: 
        Node *root;
    
    public: Trie()
    {
        root=new Node;
    }

    public:
    void insert(int x)
    {
        Node *node=root;
        for(int i=31;i>=0;i--)
        {
            int bit=(x>>i) & 1;
            if(!node->isContain(bit))
            {
                node->put(bit,new Node);
            }
            node=node->get(bit);
        }
    }

    int getXOR(int x)
    {
        Node *node=root;
        int num=0;
        for(int i=31;i>=0;i--)
        {
            int bit=(x>>i) & 1;
            if(node->isContain(1-bit))
            {
                num=num| (1<<i);
                node=node->get(1-bit);
            }
            else 
            {
                node=node->get(bit);
            }
            
        }

        return num;
    }
};



int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    Trie trie;
    for(auto &it:arr1) 
    {
        trie.insert(it);
    }

    int maxi=0;
    for(auto &it:arr2)
    {
        maxi=max(maxi,trie.getXOR(it));
    }

    return maxi;
}
