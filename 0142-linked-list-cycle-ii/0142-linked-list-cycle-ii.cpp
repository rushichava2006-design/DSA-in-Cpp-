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
         ListNode* fast = head ;
        ListNode* slow = head ;
        while(fast!=NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) break;
        }
         if(fast == NULL or fast->next ==NULL) return NULL;
        ListNode* temp = head ;
        while(temp != slow){
           slow = slow->next;
           temp = temp->next;
        }
        return slow;
    }
};