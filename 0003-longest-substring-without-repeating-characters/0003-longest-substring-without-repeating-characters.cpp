class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int start=-1;
        int maxLen=0;
        vector<int>ans(256,-1);
        for(int i=0; i!=n; i++){
            if(ans[s[i]]>start){
                start=ans[s[i]];
            }

            ans[s[i]]=i;
            maxLen = max(maxLen, i-start);
        }

        return maxLen;

        
    }
};