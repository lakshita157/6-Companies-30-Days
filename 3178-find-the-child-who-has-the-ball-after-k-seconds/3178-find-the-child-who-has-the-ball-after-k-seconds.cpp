class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int x = k/n;
        int rem = k%n;
        if(x%2==0){
            return rem;
        }

        return (n-rem);
    }
};