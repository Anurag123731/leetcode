class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        int second=-1;
        if(nums.size()==0) return {-1,-1};
        //calculating for first
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        // calculating for second
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                second=mid;
                low=mid+1;
            }
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return {first,second};

    }
};