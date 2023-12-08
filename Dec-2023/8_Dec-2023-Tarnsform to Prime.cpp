class Solution

{

    public:

    int minNumber(int arr[],int N)

    {

        int sum = 0;

        for (int i = 0; i < N; i++)

        {

            sum += arr[i];

        }

        if (isPrime(sum))

        {

            return 0; 

        }

        int limit = 2 * sum; 

        bool prime[limit + 1]; 

        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= limit; p++)

        {

            if (prime[p])

            {

                for (int i = p * p; i <= limit; i += p)

                {

                    prime[i] = false;

                }

            }

        }

 

        for (int i = sum + 1; i <= limit; i++)

        {

            if (prime[i])

            {

                return i - sum; 

            }

        }

        return -1;

    }

 

    bool isPrime(int n)

    {

        if (n <= 1) return false;

        if (n <= 3) return true;

        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6)

        {

            if (n % i == 0 || n % (i + 2) == 0) return false;

        }

        return true;

    }

};

