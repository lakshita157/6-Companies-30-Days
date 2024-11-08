class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return n < 0 ? false : __builtin_popcountll(n) == 1;
        for(int i=0; i<31; i++){
            if(pow(2,i)==n)return true; 
        }

        return false;
    }
};