class Solution {
public:
    int myAtoi(string s) {
        
        stringstream ans;
        ans << s;
        int x=0;
        ans>>x;
        return x;
    }
};