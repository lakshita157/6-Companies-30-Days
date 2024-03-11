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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int count=0;
        sort(v.begin(),v.end());
        while(count<v.size()){
            temp->val=v[count];
            temp = temp->next;
            count++;
        }

        return head;
    }
};