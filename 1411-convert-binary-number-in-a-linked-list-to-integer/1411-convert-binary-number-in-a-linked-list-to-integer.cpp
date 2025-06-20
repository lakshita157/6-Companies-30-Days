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
    long long binary(const std::vector<int>& binaryVector) {
        long long decimalValue = 0;
        int power = 0;
        for (int i = binaryVector.size() - 1; i >= 0; --i) {
            if (binaryVector[i] == 1) {
                decimalValue += static_cast<long long>(std::pow(2, power));
            }
            power++;
        }
        return decimalValue;
    }
    int getDecimalValue(ListNode* head) {
        int x = 0;
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }

        x = binary(v);
        return x;
    }
};