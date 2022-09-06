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
    
    bool check(TreeNode* root)
    {
        if(root->left == NULL && root->right == NULL && root->val == 0) return true;
        
        return false;
        
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        
        if(root == NULL) return root;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if(check(root)) return NULL;
            else return root;
        
    }
};