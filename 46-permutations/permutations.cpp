class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>v,vector<int>nums){
        if(nums.size()==0){
            ans.push_back(v);
            return;
        }
        for(int j=0;j<nums.size();j++){
            v.push_back(nums[j]);
            nums.erase(nums.begin()+j);
            helper(ans,v,nums);
            nums.insert(nums.begin() + j, v.back());
            v.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>v;
        helper(ans,v,nums);
        return ans;

    }
};