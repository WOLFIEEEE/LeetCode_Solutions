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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while(l1 != NULL && l2!= NULL)
        {
            int b = l1->val;
            int c = l2->val;
            
            int add = b+c+carry;
            int value = (add)%10;
            carry = (add)/10;
            
            ans->next = new ListNode(value);
            ans = ans->next;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != NULL)
        {
            int b = l1->val;
            int add = b+carry;
            int value = (add)%10;
            carry = (add)/10;
            
            ans->next = new ListNode(value);
            ans = ans->next;
            
            l1 = l1->next;
        }
        
        while(l2 != NULL)
        {
            int b = l2->val;
            int add = b+carry;
            int value = (add)%10;
            carry = (add)/10;
            
            ans->next = new ListNode(value);
            ans = ans->next;
            
            l2 = l2->next;
        }
        
        if(carry != 0)
        {
            ans->next = new ListNode(carry);
        }
        
        return temp->next;
        
    }
};