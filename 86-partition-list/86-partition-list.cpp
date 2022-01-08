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
        
        ListNode *left = new ListNode(0) , *right = new ListNode(0) , *l = left , *r = right;
        ListNode *cur = head;
        
        while(cur != NULL)
        {
            if(cur->val < x)
            {
                l->next = cur;
                l = cur;
            }else
            {
                r->next = cur;
                r = cur;
            }
            
            cur = cur->next;
        }
        
        l->next = right->next;
        r->next = NULL;
        
        return left->next;
        
    }
};