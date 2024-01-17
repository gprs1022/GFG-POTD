class Solution {
  public:
    set<vector<int>> st;
    void solve(vector<int> &arr ,int n,int i){
        if(i == n){
            st.insert(arr);
            return;
        }
        for(int j = i; j<n; j++){
            swap(arr[i],arr[j]);
            solve(arr,n,i+1);
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        // sort(arr.begin(),arr)
        solve(arr,n,0);
        vector<vector<int>> res;
        for(auto j:st){
            res.push_back(j);
        }
        return res;
    }
};