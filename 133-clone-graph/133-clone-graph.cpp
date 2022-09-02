/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        if(!node) return node;
        
        queue<Node*> q;
        q.push(node);
        unordered_map<Node*,Node*> map;
        
        
        while(!q.empty())
        {
            
            Node* top = q.front();
            q.pop();
            
            Node* newNode;
            
            if(map.find(top) == map.end())
            {
                newNode = new Node(top->val);
                map[top] = newNode;
            }else
            {
                newNode = map[top];
            }
            
            
            for(auto it:top->neighbors)
            {
                Node* temp;
                
                if(map.find(it) == map.end())
                {
                    temp = new Node(it->val);
                    map[it] = temp;
                    q.push(it);
                    newNode->neighbors.push_back(temp);
                }else
                {
                    temp = map[it];
                    newNode->neighbors.push_back(temp);
                    
                }
            }
        }
        
        return map[node];
        
    }
};