class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            int rev=0;
            while(x>0){
            int r=x%10;
            rev=rev*10+r;
            x/=10;
            }
            nums.push_back(rev);
        }
        unordered_set<int>s(nums.begin(),nums.end());
        return s.size();
    }
};