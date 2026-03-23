class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>v;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto i : s){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        if(n>=3) return v[n-3];
        else return v[n-1];
    }
};