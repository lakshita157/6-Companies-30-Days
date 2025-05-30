class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        
        int cnt =1;

        for(int i=0; i<pairs.size(); i++){
            cout<<pairs[i][0]<<" "<<pairs[i][1]<<endl;
        }

        int last = pairs[0][1];

        for(int i=1; i<pairs.size(); i++){
            if(last<pairs[i][0]){
                cnt++;
                last = pairs[i][1];
            }
        }

        return cnt;
    }
};