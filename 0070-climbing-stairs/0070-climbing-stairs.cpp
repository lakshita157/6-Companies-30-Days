class Solution {
public:
    int climbStairs(int n) {
       int a=0;
       int b=1;
       int nextterm;
       for(int i=1; i<=n; i++){
           nextterm = a+b;
           a=b;
           b=nextterm;
       }

       return b;
        
    }
};