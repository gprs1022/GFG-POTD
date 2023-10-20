//Form a number divisible by 3 using array digits
class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here 
        long r=0;
        for(int i=0; i<N; i++)
            r += arr[i]%3;
        return r%3==0;
    }
};