class Solution {
public:
    string compressedString(string w) {
       string ans ;
        int i=0;
        while(i<w.length()){
            int cnt =0;
            char ch = w[i];
            while(i<w.length() && w[i]==ch &&cnt<9){
                cnt++;
                i++;
            }
            ans+=to_string(cnt)+ch;
        }
        
        return ans;
        
        
    }
};