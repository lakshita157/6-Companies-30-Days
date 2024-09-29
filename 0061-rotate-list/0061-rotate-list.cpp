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
        int sz=0;
        ListNode* temp = head;
        while(temp!=NULL){
            sz++;
            temp = temp->next;
        }

        return sz;
    }
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(head!=NULL){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr=nxt;
        }

        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head == NULL || k==0|| head->next == NULL)return head;
        ListNode* temp = head;
        int sz=size(head);
        
        k=k%sz;
        if(k==0)return head;
        cout<<k<<endl;

        for(int i=1;i<sz-k; i++ ){
            temp = temp->next;
        }
        
        ListNode* newhead = temp->next;
        temp->next = NULL;
        ListNode* newheadtail = newhead;
        while(newheadtail->next!=NULL){
            newheadtail=newheadtail->next;
        }

        newheadtail->next=head;
        return newhead;

    }
};