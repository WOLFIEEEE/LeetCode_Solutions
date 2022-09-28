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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        while(n > 0 && temp != NULL)
        {
            temp = temp->next;
            n--;
        }
        
        ListNode* prev = NULL;
        ListNode* cur = head;
        
        while(temp != NULL)
        {
            temp = temp->next;
            prev = cur;
            cur = cur->next;
        }
        
        if(prev == NULL) return head->next;
        
        prev->next = cur->next;
        
        return head;
        
    }
};