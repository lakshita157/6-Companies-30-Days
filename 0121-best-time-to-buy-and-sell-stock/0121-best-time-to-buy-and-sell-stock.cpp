class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int start = prices[0];
        for(int i=1; i<prices.size(); i++){
            ans = max(ans, prices[i]-start);
            if(prices[i]<start){
                start = prices[i];
            }
            
        }

        return ans;
    }
};