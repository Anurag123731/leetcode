class Solution {
public:
    vector<vector<int>>dp;
    int f(vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i==m-1 && j==n-1) return grid[i][j];
        if(i>m-1 || j>n-1 || i<0 || j<0) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(f(grid,i+1,j,m,n),f(grid,i,j+1,m,n));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        dp.clear();
        dp.resize(205,vector<int>(205,-1));
        return f(grid,0,0,m,n);
    }
};