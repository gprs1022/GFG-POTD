class Solution 
{
public:
    int TotalWays(int n)
    {
        long long mod = 1000000007, a = 2, b = 3;
        if (n == 1)
            return 4;
    
        if (n == 2)
            return 9;
    
        for (int i = 3; i <= n; i++)
        {
            long long c = (a + b) % mod;
            a = b;
            b = c;
        }
    
        return (b * b) % mod;
    }
};
