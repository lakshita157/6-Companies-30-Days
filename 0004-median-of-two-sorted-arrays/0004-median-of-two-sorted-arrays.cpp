class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int, vector<int>, greater<int>>q;

        for(int i=0; i<nums1.size(); i++){
            q.push(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){
            q.push(nums2[i]);
        }

        int x = nums1.size()+nums2.size();

        if(x%2!=0){
            int sz = x/2;
            while(sz--){
                q.pop();
            }
            return double(q.top());
        }
        else{
            int sz = x/2 -1;
            while(sz--){
                q.pop();
            }
            int fir= q.top();
            q.pop();
            int sec = q.top();

            return double((fir+sec)/2.0);
        }

        return -1;
    }
};