class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int stairs[n];
        stairs[0]=cost[0];
        stairs[1]=cost[1];
        for(int i=2;i<n;i++){
            stairs[i]=cost[i]+min(stairs[i-1],stairs[i-2]);
        }
        return min(stairs[n-2],stairs[n-1]);
    }
};