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
    
    int difference(ListNode* a , ListNode* b)
    {
        
        // cout << a->val << " " << b->val << endl;
        int len1 = 0;
        int len2 = 0;
        
        while(a != NULL || b!= NULL)
        {
            if(a != NULL)
            {
                len1++;
                a= a->next;
            }
            
            if(b!= NULL)
            {
                len2++;
                b = b->next;
            }
        }
        
        return len1-len2;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int d = difference(headA , headB);
        
        if(d<0)
        {
            while(d!= 0)
            {
                if(headB != NULL)headB = headB->next;
                d++;
            }
        }else
        {
            while(d!= 0)
            {
               if(headA != NULL)headA = headA->next;
                d--;
            }
        }
        
        
        
        while(headA != NULL && headB != NULL)
        {
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        
        return NULL;
        
    }
};