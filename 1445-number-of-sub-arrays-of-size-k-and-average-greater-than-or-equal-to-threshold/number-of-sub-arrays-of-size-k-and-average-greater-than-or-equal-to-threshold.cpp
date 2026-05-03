class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0;
        int j=k-1;
        int sum=0;
        int n=arr.size();
        for(int x=i;x<=j;x++){
            sum+=arr[x];
        }
        int count=0;
        int avg=0;
        while(j<n-1){
            avg=sum/k;
            if(avg>=threshold) count++;
            sum-=arr[i];
            i++;
            j++;
            sum+=arr[j];
        }
        avg=sum/k;
        if(avg>=threshold) count++;
        return count;

        
    }
};