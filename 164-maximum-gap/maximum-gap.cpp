class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int n=nums.size();
        int md=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            md=max(nums[i]-nums[i-1],md);
        }
        return md;
    }
};