class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int z=0,o=0,idx=-1;
        for(int i=0;i<s.size();i++) 
        {
            z=z+(s[i]=='0');
            o=o+(s[i]=='1');
            if(i>(k+k)) 
            {
                break;
            }
        }
        int co=o,cz=z;
        int remove=0,init;
        for(int i=k+k+1;i<s.size();i++)
        {
            init=0;
            if(i!=(k+k+1)) 
            {
                if(s[i]=='1') o++;
                else z++;
            }
            co=o,cz=z;
            for(int j=i;j<s.size();j++) 
            {
                if(init) 
                {
                    if(s[init-1]=='0') cz--;
                    else co--;
                    if(s[j]=='0') cz++;
                    else co++;
                }
                if(cz>k and co>k) 
                {
                    remove++;
                }
                init++;

            }
        }
        int n=s.size();
        int total=((n+1)*n)/2;
        return total-remove;
    }
};
