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
    vector<double> averageOfLevels(TreeNode* root) {
        
        
        if(root == NULL) return{};
        
        queue<TreeNode*> temp;
        temp.push(root);
        
        vector<double> ans;
        
        while(!temp.empty())
        {
            int size = temp.size();
            cout << size << endl;
            double aa = 0;
            cout << aa << " ";
            for(int i= 0 ;i < size ;i++)
            {
                TreeNode* r = temp.front();
                temp.pop();
                
                
                aa += r->val;
                if(r->left) temp.push(r->left);
                if(r->right) temp.push(r->right);
                
               
            }
            
            
            ans.push_back(aa/size);
        }
        
        return ans;
        
        
    }
};