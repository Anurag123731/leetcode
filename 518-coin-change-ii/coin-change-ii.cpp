class Solution {
public:
vector<vector<int>>dp;
    int f(int amount,vector<int>&coins,int idx,vector<vector<int>>&dp){
        if(amount==0) return 1;
        if(amount<0) return 0;
        if(idx==coins.size()) return 0;
        if(dp[amount][idx]!=-1) return dp[amount][idx];
        int count=0;
        count+=f(amount-coins[idx],coins,idx,dp);
        count+=f(amount,coins,idx+1,dp);
        return dp[amount][idx]=count;
    }
    int change(int amount, vector<int>& coins) {
        dp.clear();
        dp.resize(5005,vector<int>(305,-1));
        return f(amount,coins,0,dp);
    }
};