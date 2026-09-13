class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int mid=n/2;
        if(m[nums[mid]]==1) return true;
        else return false;
    }
};