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

    int len (ListNode* temp){
        ListNode* head = temp;
        int sz =0;
        while(head!=NULL){
            sz++;
            head = head->next;
        }

        return sz;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1= headA;
        ListNode* temp2 = headB;
        ListNode* dum1= headA;
        ListNode* dum2 = headB;
        int sz1 = len(temp1);
        int sz2 = len(temp2);
        int diff = abs(sz1-sz2);
        if(sz1>sz2){
            while(diff--){
                temp1 = temp1->next;
            }
        }

        else{
            while(diff--){
                temp2=temp2->next;
            }
        }

        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return temp1;
    }
};