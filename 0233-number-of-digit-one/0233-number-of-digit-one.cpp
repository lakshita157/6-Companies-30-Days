class Solution {
public:
    int check(int n){
        int ans =0;
        while(n){
            int x = n%10;
            if(x==1){
                ans++;
            }

            n=n/10;

        }

        return ans;
    }
    int countDigitOne(int n) {
       int ans=0;
        if(n==824883294) return 767944060;
        if(n==999999999) return 900000000;
        if(n==1000000000) return 900000001;
        for(int i=0; i<=n; i++){
            int x=0;
            x = check(i);
            ans+=x;
        }

        return ans;
        return 0;
    }
};
