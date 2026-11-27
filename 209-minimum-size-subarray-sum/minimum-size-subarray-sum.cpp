class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=0;
        int sum=arr[j];
        int length=INT_MAX;
        while(j<n){
            if(sum<target){
                j++;
                if(j==n && length!=INT_MAX) return length;
                if(j==n && length==INT_MAX) return 0;
                sum+=arr[j];
            }
            else{
                length=min(length,j-i+1);
                sum-=arr[i];
                i++;
            }
        } 
        return length;
    }
};