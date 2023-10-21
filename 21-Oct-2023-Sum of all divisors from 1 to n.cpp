//sum of all divisors from 1 to n 
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long int ans = 0;
       for(int i=1;i<=N;i++){
           ans+=(N/i)*i;
       }
       return ans;
    }
};