class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int  ans =0;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(auto x: st){
            int cnt =0;
            if(st.find(x-1)==st.end()){
                cnt =1;
                int node = x;
                while(st.find(node+1)!=st.end()){
                    node = node+1;
                    cnt++;
                   
                }

                ans = max(ans, cnt);


            }


        }

        return ans;
    }
};