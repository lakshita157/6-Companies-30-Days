class Solution {
public:
    int appendCharacters(string s, string t) {
        string str = s;
        int i=0;
        int j =0;
        int x=0;
        int y=0;
        if(t.length()==1){
            for(int i=0; i<s.length();i++){
                if(s[i]==t[0]){
                    return 0;
                }
            }
        }
        while(i<t.length() && j<s.length()){
            if(t[i]==s[j]){
                i++;
                
            }

            j++;
        }
        return t.length()-i;
        
    }
};