class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0;
        int chair=0;
        for(int i=0; i<s.length();i++){
            if(s[i]=='E'){
                cnt++;
            }
            else if(s[i]=='L'){
                cnt--;
            }
            chair = max(chair, cnt);
        }
        
        return chair;
    }
};