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
    
    
    ListNode* reverse(ListNode* t2)
    {
        ListNode* prev = NULL;
        ListNode* next = t2;
        
        while(t2!= NULL)
        {
            next = t2->next;
            t2->next = prev;
            prev = t2;
            t2 = next;
        }
        
        return prev;
    }
    
    void print(ListNode* aa)
    {
        while(aa != NULL)
        {
            aa = aa->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return true;
        
        ListNode* start = head;
        
        ListNode* h1 = head;
        ListNode* h2 = head;
        ListNode* prev = NULL;
        
        while(h2!= NULL && h2->next != NULL)
        {
            prev = h1;
            h1 = h1->next;
            h2 = h2->next->next;
        }
        
        if(h2!= NULL && h2->next == NULL) h1 = h1->next;
        
        prev->next = reverse(h1);
        
        ListNode* mid = prev->next;
        
        
        
        print(mid);
        while(mid != NULL)
        {
            if(start-> val != mid->val) return false;
            start = start->next;
            mid = mid->next;
        }
        
        
        return true;
        
    }
};