class Solution {
public:
    bool isMatch(string s, string p) {
        int n = p.size();
        int m = s.size();
        vector<vector<bool>>dp(n+1, vector<bool>(m+1, false));

        for(int j=1; j<=m; j++){
            dp[0][j] = false;

        }

        dp[0][0] = true;

        for(int i=1; i<=n; i++){
            bool flag = true;
            for(int ii = 1; ii<=i; ii++){
                if(p[ii-1]!='*'){
                    flag=false;
                }
            }

            dp[i][0] = flag;
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(p[i-1]==s[j-1] || p[i-1]=='?'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[i-1]=='*'){
                    dp[i][j] = dp[i-1][j] | dp[i][j-1];
                }
                else{
                    dp[i][j] = false;
                }
            }
        }

        return dp[n][m];
    }
};

// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         int sLen = s.size(), pLen = p.size();
//         int sIdx = 0, pIdx = 0, starIdx = -1, match = 0;
        
//         while (sIdx < sLen) {
            
//             if (pIdx < pLen && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
//                 sIdx++;
//                 pIdx++;
//             }
            
//             else if (pIdx < pLen && p[pIdx] == '*') {
//                 starIdx = pIdx;
//                 match = sIdx;
//                 pIdx++;
//             }
//             // If there's a previous '*', try to extend it by one character
//             else if (starIdx != -1) {
//                 pIdx = starIdx + 1;
//                 match++;
//                 sIdx = match;
//             }
//             // If there's no match
//             else {
//                 return false;
//             }
//         }
        
//         // Check for remaining characters in the pattern (they must all be '*')
//         while (pIdx < pLen && p[pIdx] == '*') {
//             pIdx++;
//         }
        
//         return pIdx == pLen;
//     }
// };
