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
    ListNode* rotateRight(ListNode* head, int k) {
        
        int size = 0 ;
        
        if(head == NULL) return head;
        ListNode* temp = head;
        ListNode* end = NULL;
        while(temp)
        {
            size++;
            end = temp;
            temp = temp->next;
            
            
        }
        
        k = k%size;
        if(k == 0) return head;
        
        k = size-k;
        
        ListNode* prev = NULL;
        temp = head;
        
        while(k--)
        {
            prev = temp;
            temp = temp->next;
        }
        
        ListNode* ans = prev->next;
        prev->next = NULL;
        end->next = head;
        
        return ans;
        
        
    }
};