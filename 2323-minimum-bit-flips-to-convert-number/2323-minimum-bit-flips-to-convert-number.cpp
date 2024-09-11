class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorval = start^goal;
        int ans =0;
        while(xorval >0){
            ans+=xorval &1;
            xorval >>=1;
        }

        return ans;
    }
};