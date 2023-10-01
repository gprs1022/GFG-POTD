#include <bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        if(m==1)
        {
            for(int i=0; i<n; i++)
            {
                ans.push_back(matrix[i][m-1]);
            }
            return ans;
        }
        else if(n==1)
        {
            for(int i=0; i<m; i++)
            {
                ans.push_back(matrix[n-1][i]);
            }
            return ans;
        }
        else
        {
            int row=0;
            for(int col=0; col<m; col++)
            {
                ans.push_back(matrix[row][col]);
            }
            int col=m-1;
            for(int i=1; i<n; i++)
            {
                ans.push_back(matrix[i][col]);
            }
            row=n-1;
            for(int i=m-2; i>=0;i--)
            {
                ans.push_back(matrix[row][i]);
            }
            col=0;
            for(int i=n-2; i>0; i--)
            {
                ans.push_back(matrix[i][col]);
            }
        }
        
        
        return ans;
    }
};