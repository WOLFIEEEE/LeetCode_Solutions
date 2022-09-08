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
        
        if(head == NULL && head->next == NULL) return NULL;
        
        ListNode* l1 = head;
        ListNode* l2 = head;
        
        while(n--) l2 = l2->next;
        
        bool check = false;
        
        while(l2 != NULL)
        {
            l2 = l2->next;
            
            if(l2 == NULL)
            {
                l1->next = l1->next->next;
                check = true;
                return head;
            }
            l1 = l1->next;
        }
        
        return check ? head : head->next;
        
        
    }
};