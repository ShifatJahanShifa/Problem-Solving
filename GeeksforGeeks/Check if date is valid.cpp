//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public: 
    int maxYear=9999;
    int minYear=1800;
    
    bool check(int d,int m)
    {
        if(m==4 || m==6 ||m==9 || m==11) 
        {
            return (d>0 and d<31);
        }
        return (d>0 and d<32);
    }
    
    bool isLeap(int y) 
    {
        return (((y%4==0)&&(y%100!=0))||(y%400==0)) ;
    }
    int isValidDate(int d, int m, int y) { 
        if(y<minYear || y>maxYear) return 0;
        if(m<1 or m>12) return 0;
        bool leap=isLeap(y); 
        if(leap) 
        {
            if(m==2) 
            {
                if((d>0 and d<30))
                return 1;
                else return 0;
            }
            else 
            {
                if(check(d,m)) return 1;
                else return 0;
            }
        }
        else 
        {
            if(m==2) 
            {
                if((d>0 and d<29))
                return 1;
                else return 0;
            }
            else 
            {
                if(check(d,m)) return 1;
                else return 0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d,m,y;
        
        cin>>d>>m>>y;

        Solution ob;
        cout << ob.isValidDate(d,m,y) << endl;
    }
    return 0;
}
// } Driver Code Ends
