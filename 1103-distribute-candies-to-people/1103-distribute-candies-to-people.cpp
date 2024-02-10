class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector <int>ans(num_people,0);
        int i=0, temp=1;
        while(candies>0){
            if(i>=num_people && candies!=0){
                i=0;
            }
            if(temp<candies){
                ans[i]+=temp;
                candies-=temp;
            }
            else{
                ans[i]+=candies;
                return ans;
            }
            i++;
            temp++;
        }
        return ans;
    }
};