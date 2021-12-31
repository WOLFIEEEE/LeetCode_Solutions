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
    
    int maxx = INT_MIN;
    
    void findmax(TreeNode* root , int min_node , int max_node)
    {
        if(root == NULL) return;
        
        min_node = min (min_node , root->val);
        max_node = max( max_node , root->val);
        
        cout << min_node << " " << max_node << endl;
        maxx = max(maxx , abs(min_node- max_node));
        
        findmax(root->left , min_node , max_node);
        
        cout <<"right side starts" << endl;
        
        findmax(root->right , min_node , max_node);
        
      
    }
    int maxAncestorDiff(TreeNode* root) {
        
        findmax(root , root->val , root->val);
        return maxx;
        
    }
};