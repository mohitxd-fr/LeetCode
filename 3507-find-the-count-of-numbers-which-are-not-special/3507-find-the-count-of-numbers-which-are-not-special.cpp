class Solution {
    vector<int> sieve(int n)
    {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i=2;i*i<=n;i++)
        {
            if(isPrime[i])
            {
                for(int j = i * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> v;
        for(int i=2;i<=n;i++)
        {
            if(isPrime[i])
            {
                v.push_back(i);
            }
        }
        return v;
    }
public:
    int nonSpecialCount(int l, int r) {
        int count = 0;
        int root = sqrt(r);
        vector<int> primes = sieve(root);
        
        int specialCount = 0;
        for(int prime : primes)
        {
            int specialNumber = prime * prime;
            if(specialNumber >= l && specialNumber <= r)
            {
                specialCount++;
            }
        }
        int total = r - l + 1;
        return total - specialCount;
    }
};
