class Solution {
public:
    void helper(vector<int>&nums,int i,set<vector<int>>&s,vector<int>&v){
    if(i==nums.size()){
        s.insert(v);
        return;

    }
    helper(nums,i+1,s,v);
    v.push_back(nums[i]);
    helper(nums,i+1,s,v);
    v.pop_back();

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        vector<int>v;
        sort(nums.begin(),nums.end());
        helper(nums,0,s,v);
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};