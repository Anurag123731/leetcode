class Solution {
public:
int rev(int x){
    int re=0;
    while(x>0){
        int r=x%10;
        re=re*10+r;
        x/=10;
    }
    return re;
}

    int countNicePairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
        }
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                count=count%1000000007;
                count+=m[nums[i]];
            }
            m[nums[i]]++;
        }
        return count%1000000007;
    }
};