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
    int numComponents(ListNode* head, vector<int>& v) {
        
        ListNode* temp = head;
        int cnt =0;
        bool counter = false;

        while(temp){
            if(count(v.begin(),v.end(), temp->val) && counter == false){
                cnt++;
                counter = true;
            }

            else if(!count(v.begin(), v.end(), temp->val))
            counter = false;
            temp = temp->next;
        }

        return cnt;
    }
};

