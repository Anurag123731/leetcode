class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int i=0;
        while(i<n){
            int correct_idx=nums[i]-1;
            if(nums[i]==correct_idx || nums[i]==nums[correct_idx]) i++;
            else swap(nums[i],nums[correct_idx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};