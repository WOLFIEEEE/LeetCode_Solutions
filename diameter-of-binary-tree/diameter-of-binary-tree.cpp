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
    int maxo(TreeNode* root, int &di)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int r = maxo(root->left , di);
        int l = maxo(root->right , di);
        
        di = max(di , r+l);
        return 1 + max(r,l);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int dl = 0;
         maxo(root , dl);
        return dl;
    }
};