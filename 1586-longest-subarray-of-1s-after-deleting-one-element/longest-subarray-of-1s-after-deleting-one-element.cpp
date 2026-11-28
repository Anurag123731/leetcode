class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        int max_length=0;
        while(j<nums.size()){
            if(nums[j]==1) j++;
            else{
                if(count==0){
                    count++;
                    j++;
                }
                else{
                    max_length=max(max_length,j-i-1);
                    while(nums[i]!=0) i++;
                    i++;j++;
                }
            }
            max_length=max(max_length,j-i-1);

        }
        return max_length;
    }
};