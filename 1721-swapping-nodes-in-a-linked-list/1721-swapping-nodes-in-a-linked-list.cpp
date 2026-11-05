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
    ListNode* swapNodes(ListNode* head, int k) {
        int lenght = 0 ;
        ListNode* temp = head ;
        while(temp!= NULL){
            temp = temp->next;
            lenght++;
        }
        ListNode* temp1 = head ;
        for(int i=1 ;i<k;i++){
            temp1=temp1->next;
        }
         ListNode* temp2 = head ;
        for(int i=1 ;i<=lenght-k;i++){
            temp2=temp2->next;
        }
        swap(temp1->val ,temp2->val);
        return head ;
    }
};