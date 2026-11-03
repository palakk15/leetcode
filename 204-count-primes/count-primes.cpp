class Solution {
public:
    int countPrimes(int n) {
        if (n < 3) return 0;

        int count = 1; 
        int m = (n - 2) / 2; 
        vector<bool> isPrime(m, true); 

        for (int i = 0; (long long)(2 * i + 3) * (2 * i + 3) < n; i++) {
            if (isPrime[i]) {
                int p = 2 * i + 3;
                for (long long j = ((long long)p * p - 3) / 2; j < m; j += p) {
                    isPrime[j] = false;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};