class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            int var = nums1[i];
            int cnt =-1;
            int indx=0;
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j]==var){
                    indx=j;
                    break;
                }
            }

            for(int j=indx; j<nums2.size() ; j++ ){
                if(var<nums2[j]){
                    cnt = nums2[j];
                    break;
                }
            }
            
                ans.push_back(cnt);
            
            
        }

        return ans;
    }
};