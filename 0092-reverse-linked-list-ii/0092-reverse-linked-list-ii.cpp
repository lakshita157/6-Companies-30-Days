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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode* temp = head;
        
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        // vector<int> a;
        vector<int>b;
        // for(int i=0; i<left-1; i++){
        //     a.push_back(v[i]);
        // }

        for(int i=left-1; i<right; i++){
            b.push_back(v[i]);


        }

        reverse(b.begin(),b.end());

        for(int i=0; i<b.size(); i++){
            v[i+left-1]=b[i];
        }

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }

         ListNode* ans = new  ListNode{v[0]};
         ListNode* mover = ans;
        for(int i=1; i<v.size();i++){
            ListNode* temp = new  ListNode{v[i]};
            mover->next = temp;
            mover = temp;
        }

        return ans;
    }
};