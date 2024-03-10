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

   
    int getDecimalValue(ListNode* head) {

    
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        long long ans =0;

        // 1 2 3 4
        int x=0;
        int j=0;
        for(int i=v.size()-1; i>=0;i--){
            
            x+=v[i]*pow(2,j);
            j++;

        }
        
        return x;

    }
};
        