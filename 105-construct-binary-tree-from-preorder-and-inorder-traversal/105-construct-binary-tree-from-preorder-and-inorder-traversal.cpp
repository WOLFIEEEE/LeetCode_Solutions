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
    
    
    TreeNode* build(vector<int> pre , vector<int> in , int &root , int left , int right)
    {
        if(left > right) return NULL;
        
        int mid = left;
        
        while(pre[root] != in[mid]) mid++;
        
        root++;
        
        TreeNode* ans = new TreeNode(in[mid]);
        
        ans->left = build(pre , in , root , left , mid-1);
        ans->right = build(pre , in , root , mid+1 , right);
        
        return ans;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int rootindex = 0;
        
        return build(preorder , inorder , rootindex , 0 , inorder.size()-1 );
        
    }
};