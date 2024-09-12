class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i;
        for( i=1; k>0;i++){
            if(!binary_search(arr.begin(),arr.end(),i)){
            --k;
            }
        }
        return --i;
    }
};