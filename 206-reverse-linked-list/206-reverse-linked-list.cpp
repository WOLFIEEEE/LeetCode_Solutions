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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* pre = NULL;
        ListNode* ne = head;
        
        while(ne != NULL)
        {
            ne = head->next;
            // cout << ne->val;
            head->next = pre;
            pre = head;
            head = ne;
        }
        
        return pre;
        
    }
};