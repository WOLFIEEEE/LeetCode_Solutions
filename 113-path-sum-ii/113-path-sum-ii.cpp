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
    
    vector<vector<int>> ans;
    void solve(TreeNode* root , int targetSum , vector<int> out)
    {
        
        if(root == NULL) return;
        
        if(targetSum == 0 && root->left == NULL && root->right == NULL)
        {
            ans.push_back(out);
        }
        
        if(root->left != NULL)
        {
             int val = root->left->val;
             out.push_back(val);
            solve(root->left , targetSum-val , out);
            out.pop_back();
        }
        
        if(root->right != NULL)
        {
            int val = root->right->val;
            out.push_back(val);
            solve(root->right , targetSum-val , out);
            out.pop_back();
        }
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> out;
        
        if(root == NULL)
        {
            return {};
        }else
        {
            out.push_back(root->val);
            if(root->left == NULL && root->right == NULL)
            {
                if(root->val == targetSum)
                {
                    ans.push_back(out);
                    return ans;
                }else
                {
                    return {};
                }
            }
            else
            {
            // out.push_back(root->val);
            solve(root , targetSum-root->val , out);
            }
        }
        
        return ans;
    }
};