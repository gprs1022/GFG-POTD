//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int>m;
        if(nums.size()%2)return false;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]%k;
            m[x]++;
        }
        
        for(auto x:m){
            if(x.first==0&&x.second%2!=0)return false;
            else if(x.first!=0 &&x.second!=m[k-x.first])return false;
        }
        return true;
    }
};
//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends