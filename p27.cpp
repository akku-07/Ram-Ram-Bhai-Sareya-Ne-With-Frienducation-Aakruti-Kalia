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

    int maxd(TreeNode* root) {
        if(root==NULL) return 0;
        int rr=0;
        int ll=0;
        if(root->right) rr=1+maxd(root->right);
        if(root->left) ll=1+maxd(root->left);

        return max(rr,ll);
    }

    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=maxd(root);
        return ans+1;
    }
};