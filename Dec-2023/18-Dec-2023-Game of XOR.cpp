class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        int ans = 0;
        int len = N;
        for(int i =  0 ; i < N ; i++){
            int left = i+1;
            int right = (N-i);
            len = left*right;
            if(len&1){
                ans = (ans^A[i]);
            }
        }
        return ans;
    }
};
