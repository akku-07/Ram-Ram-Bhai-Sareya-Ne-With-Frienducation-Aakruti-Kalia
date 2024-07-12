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

    int solve(TreeNode* root,int &maxsum){
        if(root == NULL) return 0;
        int lmax = max(0,solve(root->left,maxsum));
        int rmax = max(0,solve(root->right,maxsum));
        maxsum = max(maxsum,root->val + lmax + rmax);
        return root->val + max(lmax,rmax);
    }
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;
        solve(root,maxsum);
        return maxsum;
    }
};