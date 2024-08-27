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
        int sz =0;
        while(head!=NULL){
            sz++;

            head = head->next;
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

    ListNode* first(ListNode* head){
        return head->next;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)return head;
        if(n==0)return head;
        int sz = size(head);
        int x = sz-n;
        ListNode* temp = head;
        if(n>sz)return NULL;
        if(sz==1 && n==1)return NULL;
        if(n==1){
            return last(head);
        }

        if(n==sz)return first(head);
        for(int i=0; i<x-1;i++){
            temp = temp->next;
        }

        
        cout<<temp->val;
        temp->next = temp->next->next;

        return head;
        
    }
};