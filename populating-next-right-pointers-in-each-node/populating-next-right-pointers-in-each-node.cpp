/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root) return root;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int k = q.size();
            Node* prev = NULL;
            Node* nxt = NULL;
            
            // cout <<  k<< endl;
            
            for(int i = 0 ; i < k ; i ++)
            {
                Node* te = q.front();
                q.pop();
                
                if(i == 0)
                {
                    prev = te;
                }else
                {
                    prev->next = te;
                }
                
               
                
                if(te->left != NULL) q.push(te->left);
                if(te->right != NULL) q.push(te->right);
                
                
                prev = te;
                
                if(i == k-1)
                {
                    te->next = NULL;
                }
            }
        }
        
        return root;
        
    }
};