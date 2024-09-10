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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            if(prev != NULL){
                int a = __gcd(prev->val , temp->val);
                ListNode* add = new ListNode(a);
                prev->next = add;
                add->next = temp;
            }
            
            prev = temp;
            temp = temp->next;
        }
        
        return head;
    }
};