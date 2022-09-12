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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* cursor = head;
        
        for(int i = 0 ; i < k ; i++)
        {
            if(cursor == NULL) return head;
            cursor = cursor->next;
            
        }
        
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* next;
        
        
        for(int i = 0 ; i < k ; i ++)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            
        }
        
        head->next = reverseKGroup(cur , k);
        
        return prev;
        
    }
};