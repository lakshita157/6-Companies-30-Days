class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.find(t)!=string::npos){
            return true;
        }

        return false;

       
    }
};