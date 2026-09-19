class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int i=0;
        int j=nums.size()-1;
        vector<int>ans(nums.size());
        int k=nums.size()-1;
        while(i<=j) {
            int leftsq=nums[i]*nums[i];
            int rightsq=nums[j]*nums[j];
            if(leftsq > rightsq) {
                ans[k]=leftsq;
                i++;
            }
            else {
                ans[k]=rightsq;
                j--;
            }
            k--;
        }
        return ans;
    }
};