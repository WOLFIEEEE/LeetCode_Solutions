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
    bool ans = true;
    int check(TreeNode* root)
    {
        if(!root) return 0;
        if(!ans) return 0;
        
        int left = check(root->left);
        int right = check(root->right);
        
        if(abs(left-right) > 1)
        {
            ans= false;
        }
        
        int aa =  1 + max(left, right);
        return aa;
    }
    bool isBalanced(TreeNode* root) {
        
        check(root);
        return ans;
        
    }
};