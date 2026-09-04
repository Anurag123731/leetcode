class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int total=0;
        for(int i=n-1;i>=0;i--){
            total+=cost[i--];
            if(i>=0) total+=cost[i--];
        }
        return total;
    }
};