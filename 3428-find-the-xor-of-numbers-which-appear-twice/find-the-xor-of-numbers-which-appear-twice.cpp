class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                ans^=nums[i];
            }
            else m[nums[i]]++;
        }
    return ans;
    }
};