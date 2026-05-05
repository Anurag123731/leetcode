class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,j=0;
        int oc=0;
        int ans=0;
        int prefix=0;

        while(j < nums.size()) {
            if(nums[j]%2 != 0) {
                oc++;
                prefix=0;
            }
            while(oc == k) {
                if(nums[i]%2 != 0) {
                    oc--;
                }
                i++;
                prefix++;
            }
            ans+=prefix;
            j++;
        }
        return ans;
    }
};