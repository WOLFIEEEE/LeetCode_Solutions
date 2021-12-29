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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> pre;
        vector<int> post;
        vector<int> in;
        
        if(!root) return {};
        stack<pair<TreeNode* , int>> st;
        
        st.push({root,1});
        
        while(!st.empty())
        {
            auto temp = st.top();
            st.pop();
            
            
            if(temp.second == 1)
            {
                pre.push_back(temp.first->val);
                temp.second++;
                st.push(temp);
                
                if(temp.first->left)
                {
                    st.push({temp.first->left , 1});
                }
            }else if(temp.second == 2)
            {
                in.push_back(temp.first->val);
                temp.second++;
                st.push(temp);
                
                if(temp.first->right)
                {
                    st.push({temp.first->right , 1});
                }
            }else
            {
                post.push_back(temp.first->val);
            }
        }
        
        return pre;
        
    }
};