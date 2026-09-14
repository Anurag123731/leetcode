class Solution {
public:
int robbery(vector<int>nums,int i,vector<int>&dp){
    if(i==0) return nums[i];
    if(i==1) return max(nums[i],nums[i-1]);
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(nums[i]+robbery(nums,i-2,dp),robbery(nums,i-1,dp));

}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robbery(nums,nums.size()-1,dp);
    }
};