class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < i + n; j++) {
                if (nums[j % n] > nums[i]) {
                    ans[i] = nums[j % n];
                    break;
                }
            }
        }
        return ans;
        // vector<int> ans;
        // vector<int> x(nums.size(),-1);
        // for(int i=0; i<nums.size();i++){
           
        //     for(int j=i+1; j<nums.size();j++){
        //         if(nums[i]<nums[j]){
        //             x[i] = nums[j];
                  
        //             break;
        //         }
                
        //     }
            
        // }

        // vector<int> y(nums.size(), -1);
        // for(int i=nums.size()-1; i>=0; i--){
          
        //     for(int j=0; j<=i-1; j++){
        //         if(nums[i]<nums[j]){
                   
        //             y[i] = nums[j];
        //             break;
        //         }
        //     }
           
        // }
        // // return x;

        // for(int i=0; i<nums.size();i++){
        //     if(x[i]==-1 ){
        //         x[i]=y[i];
        //     }
        // }

        // return x;
        
    }
};