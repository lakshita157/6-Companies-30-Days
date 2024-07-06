class Solution {
public:
    int nxt(int n){
        int nxtno = 0;
        while(n!=0){
            int num = n%10;
            nxtno += num*num;
            n/=10;
        }

        return nxtno;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1 && !st.count(n)){
            st.insert(n);
            n=nxt(n);
        }

        return n==1;
    }
};