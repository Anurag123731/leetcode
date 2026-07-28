class Solution {
public:
    void  helper(TreeNode*root,string s,vector<string>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s += to_string(root->val);
            ans.push_back(s);
            return;
        }
        s += to_string(root->val);
        helper(root->left,s,ans);
        helper(root->right,s,ans);
    }
    int sumNumbers(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=stoi(ans[i]);
        }
        return sum;
    }
};