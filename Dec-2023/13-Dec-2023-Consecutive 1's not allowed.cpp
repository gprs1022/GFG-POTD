class Solution{
public:
	// #define ll long long
	ll countStrings(int n) 
	{
	    int mod = 1e9+7;
	    long long a = 2;
	    long long b = 1;
	    for(int i = 2; i <= n; i++)
	    {
	        long long temp = (a+b)% mod;
	        b = a;
	        a = temp;
	    }
	    return a;
	}
};