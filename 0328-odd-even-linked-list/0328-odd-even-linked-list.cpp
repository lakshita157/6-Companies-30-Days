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
        while(head!=NULL){
            head = head->next;
            sz++;
        }

        return sz;
    }
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)return head;
        ListNode* x = head;
        int sz = size(x);
        if(sz<=2)return head;
        
        ListNode*odd = head;
        ListNode*even = head->next;
        ListNode*evenh = even;
        while(even!=NULL && even->next!=NULL){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even= even->next;
        }
        odd->next = evenh;
        return head;
    }
};