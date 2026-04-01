class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int k = primes.size();
        
        vector<long> dp(n);  
        dp[0] = 1;   // first ugly number is always 1
        
        vector<int> idx(k, 0);   // pointers for each prime
        
        for(int i = 1; i < n; i++){
            
            long next = LONG_MAX;
            
            // find next minimum value
            for(int j = 0; j < k; j++){
                next = min(next, dp[idx[j]] * primes[j]);
            }
            
            dp[i] = next;
            
            // move all pointers that contributed
            for(int j = 0; j < k; j++){
                if(dp[idx[j]] * primes[j] == next){
                    idx[j]++;
                }
            }
        }
        
        return dp[n-1];
    }
};