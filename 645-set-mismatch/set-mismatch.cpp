class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>ans(2,-1);
        for(auto i :nums){
            m[i]++;
        }
        for(int i=1;i<=n;i++){
            if(m[i]==2) ans[0]=i;
            if(m[i]==0) ans[1]=i;
        }
        return ans;
    }
};