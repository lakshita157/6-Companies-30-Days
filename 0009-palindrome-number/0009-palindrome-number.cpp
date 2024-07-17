class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> v;
        int n = x;

        while(n){
            int a = n%10;
            v.push_back(a);
            n=n/10;

        }

        int sz = v.size();
        for(int i=0; i<sz/2; i++){
            if(v[i]!=v[sz-i-1]){
                return false;
            }
        }

        return true;

    }
};