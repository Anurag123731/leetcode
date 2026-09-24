class Solution {
public:
vector<int>dp;
    int f(int n){
        if(n==1 || n==0) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1) return dp[n];
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=f(i-1)*f(n-i);
        }
        return dp[n]=sum;
    }
    int numTrees(int n) {
        dp.clear();
        dp.resize(20,-1);
        return f(n);
    }
};