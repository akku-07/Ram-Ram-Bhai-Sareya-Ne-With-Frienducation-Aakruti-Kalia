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
    TreeNode* f(int i1,int j1,int i2,int j2,vector<int>& p, vector<int>& i,unordered_map<int,int> &mp){
        // cout<<i1<<" "<<j1<<" "<<i2<<" "<<j2<<endl;

        int root = p[i1];
        int id = mp[root];
        int leftSz = id - i2;
        int rightSz = j2 - id;
        TreeNode* left = NULL;
        TreeNode* right = NULL;
        if(leftSz > 0){
            left = f(i1 + 1,i1 + leftSz,i2,id-1,p,i,mp);
        }
        if(rightSz > 0){
            right = f(i1 + leftSz + 1,j1,id +1,j2,p,i,mp);
        }
        return new TreeNode(root,left,right);
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i = 0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        int n = preorder.size();
        return f(0,n-1,0,n - 1,preorder,inorder,mp);
    }
};