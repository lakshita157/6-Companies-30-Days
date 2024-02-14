class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>st;
        for(int i=0; i<words.size();i++){
            string curr="";
            for(auto c: words[i]){
                curr+=table[c-'a'];
            }
            cout<<curr<<" ";
            st.insert(curr);
        }

        return st.size();
    }
};