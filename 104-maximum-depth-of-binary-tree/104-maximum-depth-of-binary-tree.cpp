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
    int maxDepth1(TreeNode* root) {
        // if(root==NULL) return 0;
        int left = root->left != NULL ? 1 + maxDepth1(root->left) : 0;
        int right = root->right != NULL ? 1 + maxDepth1(root->right) : 0;
        return max(left , right);   
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int ans = maxDepth1(root);
        return ans+1;
        
        
    }
};