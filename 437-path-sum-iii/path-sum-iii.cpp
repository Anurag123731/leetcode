class Solution {
public:
    int helper(TreeNode* root, int targetSum, long long sum) {
        int count = 0;

        if (root == NULL) return 0;

        sum += root->val;

        if (sum == targetSum)
            count++;

        count += helper(root->left, targetSum, sum);
        count += helper(root->right, targetSum, sum);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return 0;

        int count = helper(root, targetSum, 0LL);
        count += pathSum(root->left, targetSum);
        count += pathSum(root->right, targetSum);

        return count;
    }
};