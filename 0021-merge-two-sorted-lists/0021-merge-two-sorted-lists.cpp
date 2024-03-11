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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL) return list1;

        if(list1==NULL && list2==NULL) return NULL;

        ListNode* ans = new ListNode(-1);
        ListNode* dummy = ans;

        ListNode* left = list1;
        ListNode* right = list2;

        while(left && right){
            if(left->val <=right->val){
                dummy->next = left;
                dummy = left;
                left=left->next;
            }

            else{
                dummy ->next = right;
                dummy = right;
                right = right->next;
            }
        }

        if(left!=NULL){
            dummy ->next = left;
        }
        if(right != NULL){
            dummy ->next = right;
        }

        return ans->next;

    }
};