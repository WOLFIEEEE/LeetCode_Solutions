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
    ListNode* middleNode(ListNode* temp) {
        
        	if(temp == NULL) return NULL;

	ListNode* slow= temp;
	ListNode* fast= temp;

	while(fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;

		if(fast->next == NULL)break;

		fast = fast->next;
	}

	return slow;
        
    }
};