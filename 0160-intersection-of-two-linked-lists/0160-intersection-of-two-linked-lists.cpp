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
    int lenght(ListNode* head){
        int lenght = 0;
        ListNode* temp = head;
         while(temp != NULL){
            temp = temp->next;
            lenght++;
        }
        return lenght;
    }
    ListNode *getIntersectionNode(ListNode* headA, ListNode* headB){
        int lenghtA = lenght(headA);
        int lenghtB = lenght(headB);
        ListNode* tempA = headA;
        ListNode* tempB = headB;
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