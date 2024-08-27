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
    int size(ListNode* head){
        int sz = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }

        return sz;
    }
     ListNode* last(ListNode* head){
        ListNode* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)return NULL;
        ListNode* temp = head;
        int sz = size(temp);
        if(sz==1)return NULL;

        if(sz==2){
            return last(head);
        }

        sz/=2;
        


        for(int i=0; i<sz-1; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};