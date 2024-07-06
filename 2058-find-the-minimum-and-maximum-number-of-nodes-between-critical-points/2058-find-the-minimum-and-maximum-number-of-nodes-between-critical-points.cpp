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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
        ListNode* temp = head->next;
        ListNode* prev = head;
        int prevind = -1, firstind = -1;
        int currind = 1;
        // ListNode* nxt = head->next->next;
        while(temp->next!=NULL){
            if((temp->val>prev->val && temp->val>temp->next->val)|| (temp->val<prev->val&& temp->val<temp->next->val)  ){
                if(prevind!=-1){
                    ans[0]=(ans[0]==-1)? currind - prevind : min(ans[0], currind-prevind);
                }
                else{
                    firstind = currind;
                }
                prevind = currind;
            }

            prev = temp;
            temp = temp->next;
            currind++;
        }

        if(prevind != -1 && prevind != firstind){
            ans[1] = prevind - firstind;
        }

        return ans;
    }
};