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
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* temp = head;
        
        ListNode* curr = head->next;
        while(curr !=NULL){
            if(temp->val == curr->val){
                while(curr!=NULL && temp->val == curr->val){
                    curr = curr->next;
                }

                temp->next = curr;
            }
            else{
                temp = curr;
                curr = curr->next;
            }
        }


        return head;
    }
};