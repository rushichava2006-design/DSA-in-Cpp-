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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tempi = head ;
        ListNode* tempj = head ;
        while(tempj != NULL){
             if(tempi->val == tempj->val) tempj= tempj->next;
             else {
                tempi->next =tempj;
                tempi=tempj;
             }
        }
        if(tempi!= NULL) tempi->next =  NULL;
        return head;
    }
};