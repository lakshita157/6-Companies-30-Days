class Solution {
public:
    bool checkpalindrome(string &s){
        string s1;
        s1=s;
        reverse(s1.begin(),s1.end());
        for(int i=0; i<s.length();i++){
            if(s1[i]!=s[i]){
                return false;
            }
        }

        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(int i=0; i<words.size();i++){
            bool temp=false;

            temp = checkpalindrome(words[i]);

            if(temp == true){
                return words[i];
            }
        }

        return {""};
    }
};