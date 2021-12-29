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
    
    static bool comp(pair<int,int> a , pair<int,int> b)
    {
        if(a.first > b.first) return false;
        return true;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        if(!root) return {};
        queue<pair<TreeNode* , int>> q;
        
        map<int , vector<int>> mp;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            int k = q.size();
            
            vector<pair<int,int>> tle;
            
            for(int i = 0 ; i < k ; i++)
            {
                auto temp  = q.front();
                q.pop();
                
                int in = temp.second;
                
                // cout << in << endl;
                
                auto n = temp.first;
                
                if(n ->left)
                {
                    q.push({n->left , in-1});
                }
                if(n ->right)
                {
                    q.push({n->right , in+1});
                }
                
                tle.push_back({temp.first->val , in});
                
            }
            
            sort(tle.begin() , tle.end() , comp);
            for(auto it : tle)
            {
                mp[it.second].push_back(it.first);
            }
        }
        
        
         vector<vector<int>> ans;
        
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};