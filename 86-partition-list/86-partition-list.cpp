/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        vector<int> ls,gr;
        
        ListNode* a = head;
        
        while(a!= NULL)
        {
            if(a->val < x) ls.push_back(a->val);
            else gr.push_back(a->val);
            
            a = a ->next;
        }
        
        ListNode* temp = head;
        
        int i = 0 , j = 0;
        while(temp != NULL)
        {
            
            // cout << i << " " << j << endl;
            if(i < ls.size())
            {
                temp->val = ls[i];
                i++;
            }else
            {
                temp->val = gr[j];
                j++;
            }
            
            temp = temp->next;
        }
        
        return head;
        
    }
};