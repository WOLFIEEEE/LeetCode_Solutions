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
    
    void count(TreeNode* root , int maxx , int &good)
    {
        if(root == NULL) return;
        
        if(root->val >= maxx) 
        {
            maxx = root->val;
            good++;
        }
        
        count(root->left , maxx , good);
        count(root->right , maxx , good);
        
    }
    int goodNodes(TreeNode* root) {
        
        int good = 0;
        count(root , root->val , good);
        return good;
    }
};