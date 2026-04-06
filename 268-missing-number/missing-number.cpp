class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correct_idx=nums[i];
            if(i==correct_idx ||nums[i]==n) i++;
            else swap(nums[i],nums[correct_idx]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
    return n;
    }
};