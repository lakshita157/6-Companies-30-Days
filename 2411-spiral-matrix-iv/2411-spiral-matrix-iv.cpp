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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n, -1));

        int toprow = 0, bottomrow = m-1, leftcol = 0, rightcol =n-1;

        while(head){
            for(int j=leftcol; j<=rightcol && head; j++){
                ans[toprow][j] = head->val;
                head = head->next;
            }
            toprow++;

            for(int i=toprow; i<=bottomrow && head; i++){
                ans[i][rightcol] = head->val;
                head = head->next;
            }

            rightcol--;

            for(int j=rightcol; j>=leftcol && head; j--){
                ans[bottomrow][j]=head->val;
                head = head->next;
            }

            bottomrow--;

            for(int i=bottomrow; i>=toprow && head; i--){
                ans[i][leftcol] = head->val;
                head = head->next;
            }

            leftcol++;
        }

        return ans;
    }
};