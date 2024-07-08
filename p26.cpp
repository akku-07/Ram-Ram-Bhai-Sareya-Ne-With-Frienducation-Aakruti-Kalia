/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool f(TreeNode* root, int target){
        if(root == NULL)
        return false;

        if(root->val == target and (root->left == NULL and root->right == NULL))
        return true;


        bool l = hasPathSum(root->left,target-root->val);
        bool r = hasPathSum(root->right,target-root->val);

        return l | r;

    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=f(root,targetSum);
        return ans;
    }
};