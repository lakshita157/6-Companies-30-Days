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
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;


        }

        return prev;


    }
    bool isPalindrome(ListNode* head) {
        ListNode* clone = new ListNode(-1);
        ListNode* temp1 =clone;

        ListNode* temp = head;
        while(temp!=NULL){
            ListNode* copy = new ListNode(temp->val);
            temp1->next = copy;
            temp1=copy;
            temp = temp->next;
        }
        clone = clone->next;
        ListNode* dummy = reverse(clone);

        // while(head!=NULL){
        //     cout<<head->val<<" ";
        //     head= head->next;
        // }
       
        while(head!=NULL && dummy!=NULL){
            if(head->val != dummy->val){
                return false;
            }
            else{
                dummy = dummy->next;
                head = head->next;
            }
            
            
            
        }

        return true;
    }
};