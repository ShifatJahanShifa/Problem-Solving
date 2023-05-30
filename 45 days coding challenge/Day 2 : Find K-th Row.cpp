#include <bits/stdc++.h> 
using namespace std; 

int findRowK(vector< vector< int> > &mat) {
    int k=-1,n=mat.size();
    bool row=false,column=false;
    for(int i=0;i<n;i++) 
    {
        row=false,column=false;
        for(int j=0;j<n;j++)
        {
            if(i!=j) 
            {
                if(mat[i][j]==0) row=true;
                else{
                    row=false;
                    break;
                } 
            }
        }
        if(row) 
        {
            for(int j=0;j<n;j++) 
            {
                if(i!=j) 
                {
                    if(mat[j][i]==1) column=true;
                    else {
                      column = false;
                      break;
                    }
                }
            }   
           
        }
        if(row and column) 
        {
            return i ;
        }
    }
    return -1;
}
