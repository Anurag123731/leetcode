class Solution {
public:
    void helper(vector<string>&ans,string s,int oc,int cc,int n){
        if(oc==n && cc==n){
            ans.push_back(s);
            return;
        }
        if(oc<n) helper(ans,s+"(",oc+1,cc,n);
        if(cc<oc) helper(ans,s+")",oc,cc+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,"",0,0,n);
        return ans;
    }
};