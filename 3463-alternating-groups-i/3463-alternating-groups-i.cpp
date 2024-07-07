class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans =0;
        int n = colors.size();
        for(int i=0; i<colors.size(); i++){
            int pre = colors[i];
            int curr = colors[(i+1)%n];
            int nxt = colors[(i+2)%n];
            if(pre!=curr && curr!=nxt) ans++;
        }

        return ans;

        
    }
};