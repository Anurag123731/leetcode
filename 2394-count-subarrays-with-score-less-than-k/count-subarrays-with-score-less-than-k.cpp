class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n =nums.size();
        int i=0;
        int j=0;
        long long score;
        long long  sum=0;
        long long  ans=0;
        while(i<n && j<n){
            sum+=nums[j];
            score=sum*(j-i+1);
            while(i<=j && score>=k){
                sum-=nums[i++];
                score=sum*(j-i+1);
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};