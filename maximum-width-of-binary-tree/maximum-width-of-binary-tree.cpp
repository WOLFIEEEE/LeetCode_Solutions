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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;        
        queue<pair<TreeNode* , int>> q;
        q.push({root , 0});
        int maxx=0;
        while(!q.empty())
        {
            int min = q.front().second;
            
            int k = q.size();
            
            int low = 0 , high = 1;
            
            for(int i = 0 ; i < k ; i++)
            {
                if(i == 0) low = q.front().second;
                if(i == k-1) high = q.front().second;
                
                auto node = q.front().first;
                auto value = q.front().second;
                q.pop();
                
                if(node->left)
                {
                    q.push({node->left , 2*(value-min)+1});
                }
                
                if(node->right)
                {
                    q.push({node->right , 2*(value-min)+2});
                }
            }
            
            // cout << low << " " << high << endl;
            
             maxx = max(maxx , high-low+1);
            
            
        }
        
        return maxx;
        
       
        
        
        
    }
};