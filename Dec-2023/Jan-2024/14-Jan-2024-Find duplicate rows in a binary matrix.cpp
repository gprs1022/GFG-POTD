//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &mat, int m, int n) 
    { 
       unordered_map<string,int>mp;
       vector<int>v;
       for(int i=0;i<m;i++)
       {
           string s;
           for(int j=0;j<n;j++)
           {
               s+=to_string(mat[i][j]);
               
              
           }
            if(mp.find(s)!=mp.end())
               {
                   v.push_back(i);
               }
               else
               mp[s]=i;
       }
       
       return v;
      
    } 
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        vector<int> ans = ob.repeatedRows(matrix, row, col);


        for (int i = 0; i < ans.size(); ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// } Driver Code Ends