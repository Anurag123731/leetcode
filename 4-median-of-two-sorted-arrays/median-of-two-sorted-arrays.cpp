class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>v;
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        if(i==n){
            for(int k=j;k<m;k++){
                v.push_back(nums2[k]);
            }
        }
        if(j==m){
                for(int k=i;k<n;k++){
                v.push_back(nums1[k]);
            }
        }
        int size = v.size();
        if(size % 2 == 1){
        return v[size/2];
    }
    return (v[size/2] + v[size/2 - 1]) / 2.0;

    }
};