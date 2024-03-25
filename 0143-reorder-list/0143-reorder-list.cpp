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
    void reorderList(ListNode* head) {
        
        ListNode* temp =head;
        stack<ListNode*>st;
        while(temp){
            st.push(temp);
            temp = temp->next;
        }

        temp = head;
        unordered_map<ListNode* , bool>vis;
        while(true){
            ListNode* last = st.top();
            st.pop();
            ListNode* next = temp->next;
            vis[temp]=true;
            if(vis[last]){
                temp->next = NULL;
                break;
            }

            temp->next = last;

            vis[last] = true;
            temp = temp->next;
            if(vis[next]){
                temp->next = NULL;
                break;
            }

            temp->next = next;
            temp = temp->next;
        }
    }
};