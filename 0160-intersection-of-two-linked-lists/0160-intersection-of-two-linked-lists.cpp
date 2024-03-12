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

    int len(ListNode *head, int length){
        ListNode *temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }

        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2 = headB;
        int len1 = len(headA, 0);
        int len2 = len(headB, 0);

        if(len1<len2){
            int diff = len2-len1;
            while(diff--){
                temp2=temp2->next;
            }
        }

        else{
            int diff = len1-len2;
            while(diff--){
                temp1=temp1->next;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return temp1;
    }
};