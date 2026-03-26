class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int maxmoney=0;
        for(int i=0;i<m;i++){
            int money=0;
            for(int j=0;j<n;j++){
                money+=accounts[i][j];
            }
            maxmoney=max(money,maxmoney);
        }
        return maxmoney;
    }
};