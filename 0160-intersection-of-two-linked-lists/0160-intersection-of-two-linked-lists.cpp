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
    ListNode *getIntersectionNode(ListNode* headA, ListNode* headB){
        ListNode* tempA = headA;
        int lenghtA = 0;
        while(tempA != NULL){
            tempA = tempA->next;
            lenghtA++;
        }
        int lenghtB = 0;
        ListNode* tempB = headB;
        while(tempB != NULL){
            tempB = tempB->next;
            lenghtB++;
        }
        tempA = headA;
        tempB = headB;
        if(lenghtA > lenghtB){
            for(int i = 1 ; i<=lenghtA-lenghtB;i++){
                tempA = tempA->next;
            }
        }
        else{
             for(int i = 1 ; i<=lenghtB-lenghtA;i++){
                tempB = tempB->next;
            }
        }
        while(tempA != tempB){
            tempA = tempA->next;
             tempB = tempB->next;
        }
        return tempA;
    }
};