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
   
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(auto x:nums)st.insert(x);
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* curr = temp;
        ListNode* prev = temp;

        while(curr!=NULL){
            ListNode* nxt = curr->next;
            if(st.count(curr->val)!=0){
                prev->next = nxt;
            }
            else{
                prev=curr;
            }
            curr = curr->next;
        }

        return temp->next;
    }
};