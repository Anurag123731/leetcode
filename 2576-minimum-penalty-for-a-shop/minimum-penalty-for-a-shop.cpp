class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>pre(n+1);
        vector<int>suf(n+1);
        pre[0]=0;
        for(int i=1;i<n+1;i++){
            if(customers[i-1]=='N') pre[i]=pre[i-1]+1;
            else pre[i]=pre[i-1];
        }
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y') suf[i]=suf[i+1]+1;
            else suf[i]=suf[i+1];
        }
        int mini=INT_MAX;
        int mindex=-1;
        for(int i=0;i<=n;i++){
            pre[i]=pre[i]+suf[i];
            if(pre[i] < mini){
            mini=pre[i];
            mindex=i;
            }
        }
        return mindex;
    }
};