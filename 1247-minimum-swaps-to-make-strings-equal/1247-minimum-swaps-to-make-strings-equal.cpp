class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x1=0, x2=0;
        int y1=0, y2=0;
        for(int i=0; i<s1.length();i++){
            if(s1[i]!=s2[i]){
                if(s1[i]=='x'){
                    x1++;
                }
                else{
                    y1++;
                }
            }
        }

        if((x1+y1)%2!=0) return -1;

        return (x1+1)/2+(y1+1)/2;

        
    }
};