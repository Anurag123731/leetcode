class Solution {
public:
    int f(vector<int>& coins, int amount, vector<int>& dp) {

        // Base case
        if(amount == 0)
            return 0;

        // Already calculated
        if(dp[amount] != -2)
            return dp[amount];

        int ans = INT_MAX;

        for(int i = 0; i < coins.size(); i++) {

            if(coins[i] > amount)
                continue;

            int temp = f(coins, amount - coins[i], dp);

            // Remaining amount cannot be formed
            if(temp == -1)
                continue;

            ans = min(ans, temp);
        }

        // No possible combination
        if(ans == INT_MAX)
            return dp[amount] = -1;

        // +1 for the current coin
        return dp[amount] = 1 + ans;
    }

    int coinChange(vector<int>& coins, int amount) {

        // -2 means "not calculated yet"
        vector<int> dp(amount + 1, -2);

        return f(coins, amount, dp);
    }
};