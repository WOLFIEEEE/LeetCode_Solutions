/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        unordered_map<ListNode* , int> st;
        ListNode* p1 = head;
        while(p1!= NULL)
        {
            if(st.find(p1) != st.end())
            {
                return p1;
            }
            
            st[p1]++;
            
            p1 = p1->next;
        }
        
        return p1;
        
    }
};